package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Html.Builder headBuilder = new Html.Builder();

        headBuilder.setTag("head").setValue("title");

        Html head = headBuilder.setTag("head").setValue("title").build();

        System.out.println(head);

        System.out.println("*************");

        Html.Builder paragBuilder = new Html.Builder();

        Html parag = paragBuilder
                .setTag("p")
                .addAttribute("class", "new-class")
                .addAttribute("id", "parag-text")
                .build();

        System.out.println(parag);

    }
}
