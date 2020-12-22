package org.csystem.app;

import org.csystem.util.io.IOUtil;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class Server {
    private final int m_port;
    private final ExecutorService m_threadPool;

    private void handleClient(Socket socket)
    {
        try (socket) {
            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            String filename = br.readLine().trim();

            if (new File(filename).exists())
                return;

            try (FileOutputStream fos = new FileOutputStream(filename, true)) {
                IOUtil.copy(socket.getInputStream(), fos, 1024);
            }
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }
    }

    public Server(int port)
    {
        m_port = port;
        m_threadPool = Executors.newCachedThreadPool();
    }

    public void run()
    {
        try (ServerSocket serverSocket = new ServerSocket(m_port)) {
            for (;;) {
                System.out.println("Waiting for a client");
                Socket socket = serverSocket.accept();

                m_threadPool.submit(() -> handleClient(socket));
            }
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }
    }
}
