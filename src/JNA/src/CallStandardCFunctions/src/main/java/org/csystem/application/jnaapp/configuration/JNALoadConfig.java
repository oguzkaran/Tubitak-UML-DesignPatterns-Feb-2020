package org.csystem.application.jnaapp.configuration;

import com.sun.jna.Native;
import com.sun.jna.Platform;
import org.csystem.application.jnaapp.jna.ICMath;
import org.csystem.application.jnaapp.jna.ICString;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class JNALoadConfig {
    @Bean
    public ICString loadStringLib()
    {
        return Native.load(Platform.isWindows() ? "msvcrt" : "c", ICString.class);
    }

    @Bean
    public ICMath loadMathLib()
    {
        return Native.load(Platform.isWindows() ? "msvcrt" : "c", ICMath.class);
    }
}
