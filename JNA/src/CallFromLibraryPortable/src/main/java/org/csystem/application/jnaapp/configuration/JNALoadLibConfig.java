package org.csystem.application.jnaapp.configuration;

import com.sun.jna.Native;
import com.sun.jna.Platform;
import org.csystem.application.jnaapp.jna.IOperation;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class JNALoadLibConfig {
    @Value("${windowslib}")
    private String m_windowsLib;
    @Value("${posixlib}")
    private String m_posixLib;

    @Bean
    public IOperation loadOperation()
    {
        String lib = Platform.isWindows() ? m_windowsLib : m_posixLib;

        return Native.load(lib, IOperation.class);
    }
}
