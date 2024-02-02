#ifndef TEXTURELOADER_H
#define TEXTURELOADER_H

#include <QObject>
#include <QOpenGLFunctions_4_1_Core>

class TextureLoader : public QObject,protected QOpenGLFunctions_4_1_Core
{
	Q_OBJECT

public:
	void init();
	GLuint CreateTexture(const char* path, bool srgb);
};
#endif