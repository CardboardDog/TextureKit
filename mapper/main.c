#include<gtk/gtk.h>
static void application_begin(GtkApplication *app, gpointer user_data){
	GtkWidget* window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window),"Texture Kit");
	gtk_window_set_default_size(GTK_WINDOW(window),200,200);

	GtkWidget* button = gtk_button_new_with_label("coming soon");
	gtk_window_set_child(GTK_WINDOW(window),button);

	gtk_window_present(GTK_WINDOW(window));
}
int main(int argc, char** argv){
	GtkApplication* app = gtk_application_new("com.github.cardboarddog.TextureKit",G_APPLICATION_DEFAULT_FLAGS);
	g_signal_connect(app,"activate",G_CALLBACK(application_begin),NULL);
	int status = g_application_run(G_APPLICATION(app),argc,argv);

	g_object_unref(app);
	return status;
}
