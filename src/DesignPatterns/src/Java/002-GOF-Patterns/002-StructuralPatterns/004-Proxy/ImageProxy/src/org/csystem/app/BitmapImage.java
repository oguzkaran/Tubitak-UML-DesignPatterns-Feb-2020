package org.csystem.app;

public class BitmapImage implements IImage {
    private String m_filename;

    private void loadImage()
    {
        System.out.println("Image loaded");
    }

    public BitmapImage(String filename)
    {
        m_filename = filename;
        loadImage();
    }

    @Override
    public void show()
    {
        System.out.println("Image display");
    }
}
