package org.csystem.application.jnaapp.configuration;

import org.csystem.application.jnaapp.jna.ICMath;
import org.csystem.application.jnaapp.jna.ICString;
import org.springframework.boot.ApplicationRunner;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class ApplicationRunnerConfig {
    private final ICMath m_cMath;
    private final ICString m_cString;

    public ApplicationRunnerConfig(ICMath cMath, ICString cString)
    {
        m_cMath = cMath;
        m_cString = cString;
    }

    @Bean
    public ApplicationRunner runApplication()
    {
        return args -> {
            String s = "";

            double a = 2.0;
            double b = 3.0;

            System.out.printf("pow(%f, %f) = %f%n", a, b, m_cMath.pow(a, b));
            System.out.printf("sqrt(%f) = %f%n", a, m_cMath.sqrt(a));
            s = m_cString.strcpy(s, "ankara");

            System.out.printf("Text:%s%n", s);
            System.out.printf("Length:%s%n", s.length());
        };
    }
}
