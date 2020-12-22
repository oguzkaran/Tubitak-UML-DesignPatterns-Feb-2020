package org.csystem.app;

import org.csystem.util.IIntOperation;
import org.csystem.util.JarUtil;

import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        try {
            Scanner kb = new Scanner(System.in);

            for (;;) {
                System.out.print("Birinci sayıyı giriniz:");
                int a = Integer.parseInt(kb.nextLine());

                if (a == 0)
                    break;

                System.out.print("İkinci sayıyı giriniz:");
                int b = Integer.parseInt(kb.nextLine());

                for (var cls : JarUtil.getImplementedClassesByJars("jars", IIntOperation.class)) {
                    var result = JarUtil.callMethod(cls, "apply", JarUtil.makeParamInfo(a), JarUtil.makeParamInfo(b));

                    System.out.println(result);
                }
            }
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }
    }
}


