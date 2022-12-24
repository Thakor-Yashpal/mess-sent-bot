import React from "react";
import { useDropzone } from "react-dropzone";

function ImageMerge() {
  const [images, setImages] = React.useState([]);

  const onDrop = React.useCallback(acceptedFiles => {
    setImages(acceptedFiles);
  }, []);
  const { getRootProps, getInputProps, isDragActive } = useDropzone({ onDrop });

  return (
    <div {...getRootProps()}>
      <input {...getInputProps()} />
      {isDragActive ? (
        <p>Drop the files here ...</p>
      ) : (
        <p>Drag 'n' drop some files here, or click to select files</p>
      )}
      {images.length > 0 && (
        <div>
          <h3>Previews:</h3>
          {images.map(image => (
            <img key={image.name} src={URL.createObjectURL(image)} alt={image.name} />
          ))}
        </div>
      )}
    </div>
  );
}

export default ImageMerge;
