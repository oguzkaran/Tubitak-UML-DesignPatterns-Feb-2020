package org.csystem.app;

import org.csystem.util.io.IOUtil;

import java.io.*;
import java.net.Socket;
import java.nio.file.Path;
import java.util.Scanner;

public class Client {
    private final String m_host;
    private final int m_port;

    private void sendFileProc(String filename)
    {
        try  (Socket socket = new Socket(m_host, m_port); FileInputStream fis = new FileInputStream(filename)) {
            BufferedWriter bw  = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

            bw.write(new File(filename).getName() + "\r\n");
            bw.flush();

            IOUtil.copy(fis, socket.getOutputStream(), 1024);
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }
    }

    public Client(String host, int port)
    {
        m_host = host;
        m_port = port;
    }

    public void run()
    {
        Scanner kb = new Scanner(System.in);
        for (;;) {
            System.out.print("Dosya ismini giriniz:");
            String filename = kb.nextLine();

            if (filename.equals("quit"))
                break;

            if (!new File(filename).exists()) {
                System.out.println("Dosya bulunamadı");
                continue;
            }

            sendFileProc(filename);
        }
    }
}
