package org.csystem.application.jnaapp.configuration;

import org.csystem.application.jnaapp.jna.IOperation;
import org.springframework.boot.ApplicationRunner;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class ApplicationRunnerConfig {
    private final IOperation m_operation;

    public ApplicationRunnerConfig(IOperation operation)
    {
        m_operation = operation;
    }

    @Bean
    public ApplicationRunner runApplication()
    {
        return args -> {
            int a = 10, b = 20;
            System.out.printf("%d + %d = %d%n", a, b, m_operation.add(a, b));
            System.out.printf("%d * %d = %d%n", a, b, m_operation.multiply(a, b));
        };
    }
}
