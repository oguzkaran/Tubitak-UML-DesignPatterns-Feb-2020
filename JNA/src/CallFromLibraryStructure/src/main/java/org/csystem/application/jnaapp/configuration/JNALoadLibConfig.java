package org.csystem.application.jnaapp.configuration;

import com.sun.jna.Native;
import com.sun.jna.Platform;
import org.csystem.application.jnaapp.jna.ISample;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class JNALoadLibConfig {
    @Value("${lib}")
    private String m_posixLib;

    @Bean
    public ISample loadSampleLib()
    {
        return Native.load(m_posixLib, ISample.class);
    }
}
