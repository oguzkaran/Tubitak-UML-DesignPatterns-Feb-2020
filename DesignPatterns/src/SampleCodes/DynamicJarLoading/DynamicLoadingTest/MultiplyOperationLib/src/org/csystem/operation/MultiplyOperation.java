package org.csystem.operation;

import org.csystem.util.IIntOperation;

public class MultiplyOperation implements IIntOperation {
    @Override
    public int apply(int a, int b)
    {
        return a * b;
    }
}

/*
*
*
* val f = File(
                this.getFilesDir().getPath()
                    .toString() + "/calculmobiledex.jar"
            )

            val u = DexClassLoader(
                f.toURI().toURL()
                    .toString(), c.getDir("libs", Context.MODE_PRIVATE)
                    .getAbsolutePath(), null,
                ClassLoader.getSystemClassLoader()
            )
            val c = u.loadClass("perimetre.calcul")

            val constru: Constructor<*> = c
                .getConstructor(Int::class.javaPrimitiveType, Int::class.javaPrimitiveType)
            val o: Any = constru.newInstance(2, 2)
            var m: Method? =
                c.getMethod("resultat", Int::class.javaPrimitiveType, Int::class.javaPrimitiveType)
            m?.setAccessible(true)

            m = null

            mainActivityTextViewResult.text = msg
*
* */