package org.csystem.application.jnaapp.configuration;

import org.csystem.application.jnaapp.jna.ISample;
import org.csystem.application.jnaapp.jna.Sample;
import org.springframework.boot.ApplicationRunner;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class ApplicationRunnerConfig {
    private final ISample m_sample;

    public ApplicationRunnerConfig(ISample sample)
    {
        m_sample = sample;
    }

    @Bean
    public ApplicationRunner runApplication()
    {
        return args -> {
            Sample s = m_sample.create_sample(10, 20, "ankara");

            if (s == null) {
                System.err.println("Can not allocate memory");
                return;
            }

            m_sample.display_sample(s);
            m_sample.destroy_sample(s);
        };
    }
}
