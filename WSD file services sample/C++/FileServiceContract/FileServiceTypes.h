// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT MODIFY IT BY HAND.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <Include>
#pragma once
// </Include>

// <NamespaceDeclarations>
// 
// Namespace http://www.example.com/ncd/FileService
// 
#define NAMESPACE_ENCODING_FILE_SERVICE WSDXML_NAMESPACE_ENCODING(0,1)
extern WSDXML_NAME Names_FileService[];
extern WSDXML_NAMESPACE Namespace_FileService;


#define FILESERVICE_FileChangeEventType                         WSDXML_NAME_ENCODING(0,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_GetFileRequest                              WSDXML_NAME_ENCODING(1,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_GetFileResponse                             WSDXML_NAME_ENCODING(2,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_GetFileListResponse                         WSDXML_NAME_ENCODING(3,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileChangeEvent                             WSDXML_NAME_ENCODING(4,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService                                 WSDXML_NAME_ENCODING(5,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService_GetFileList_InputMessage        WSDXML_NAME_ENCODING(6,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService_GetFileList_OutputMessage       WSDXML_NAME_ENCODING(7,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_GetFileList                                 WSDXML_NAME_ENCODING(8,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileList                                    WSDXML_NAME_ENCODING(9,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_Element                                     WSDXML_NAME_ENCODING(10,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_Parameters                                  WSDXML_NAME_ENCODING(11,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService_GetFile_InputMessage            WSDXML_NAME_ENCODING(12,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService_GetFile_OutputMessage           WSDXML_NAME_ENCODING(13,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_GetFile                                     WSDXML_NAME_ENCODING(14,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FilePath                                    WSDXML_NAME_ENCODING(15,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_Attachment                                  WSDXML_NAME_ENCODING(16,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileService_FileChangeEvent_OutputMessage   WSDXML_NAME_ENCODING(17,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_EventType                                   WSDXML_NAME_ENCODING(18,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileName                                    WSDXML_NAME_ENCODING(19,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_Result                                      WSDXML_NAME_ENCODING(20,NAMESPACE_ENCODING_FILE_SERVICE)
#define FILESERVICE_FileDevice                                  WSDXML_NAME_ENCODING(21,NAMESPACE_ENCODING_FILE_SERVICE)

// 
// Namespace http://www.w3.org/2001/XMLSchema
// 
#define NAMESPACE_ENCODING_XML_SCHEMA WSDXML_NAMESPACE_ENCODING(1,1)
extern WSDXML_NAME Names_XMLSchema[];
extern WSDXML_NAMESPACE Namespace_XMLSchema;


#define XMLSCHEMA_AnyType   WSDXML_NAME_ENCODING(0,NAMESPACE_ENCODING_XML_SCHEMA)

// 
// Namespace http://www.example.org/ncd/FileService
// 
#define NAMESPACE_ENCODING_FILE_SERVICE_1 WSDXML_NAMESPACE_ENCODING(2,1)
extern WSDXML_NAME Names_FileService_1[];
extern WSDXML_NAMESPACE Namespace_FileService_1;


#define FILESERVICE_1_FileDevice   WSDXML_NAME_ENCODING(0,NAMESPACE_ENCODING_FILE_SERVICE_1)

extern WSDXML_NAMESPACE* FileServiceNamespaces[3];
#define FileServiceRegisterNamespaces(pContext) pContext->SetNamespaces(FileServiceNamespaces,(sizeof(FileServiceNamespaces) / sizeof(FileServiceNamespaces[0])),1)

// </NamespaceDeclarations>

// <NamespaceNameMacros>

#define NAME_FILESERVICE_FileChangeEventType                         (&(Names_FileService[0]))
#define NAME_FILESERVICE_GetFileRequest                              (&(Names_FileService[1]))
#define NAME_FILESERVICE_GetFileResponse                             (&(Names_FileService[2]))
#define NAME_FILESERVICE_GetFileListResponse                         (&(Names_FileService[3]))
#define NAME_FILESERVICE_FileChangeEvent                             (&(Names_FileService[4]))
#define NAME_FILESERVICE_FileService                                 (&(Names_FileService[5]))
#define NAME_FILESERVICE_FileService_GetFileList_InputMessage        (&(Names_FileService[6]))
#define NAME_FILESERVICE_FileService_GetFileList_OutputMessage       (&(Names_FileService[7]))
#define NAME_FILESERVICE_GetFileList                                 (&(Names_FileService[8]))
#define NAME_FILESERVICE_FileList                                    (&(Names_FileService[9]))
#define NAME_FILESERVICE_Element                                     (&(Names_FileService[10]))
#define NAME_FILESERVICE_Parameters                                  (&(Names_FileService[11]))
#define NAME_FILESERVICE_FileService_GetFile_InputMessage            (&(Names_FileService[12]))
#define NAME_FILESERVICE_FileService_GetFile_OutputMessage           (&(Names_FileService[13]))
#define NAME_FILESERVICE_GetFile                                     (&(Names_FileService[14]))
#define NAME_FILESERVICE_FilePath                                    (&(Names_FileService[15]))
#define NAME_FILESERVICE_Attachment                                  (&(Names_FileService[16]))
#define NAME_FILESERVICE_FileService_FileChangeEvent_OutputMessage   (&(Names_FileService[17]))
#define NAME_FILESERVICE_EventType                                   (&(Names_FileService[18]))
#define NAME_FILESERVICE_FileName                                    (&(Names_FileService[19]))
#define NAME_FILESERVICE_Result                                      (&(Names_FileService[20]))
#define NAME_FILESERVICE_FileDevice                                  (&(Names_FileService[21]))


#define NAME_XMLSCHEMA_AnyType   (&(Names_XMLSchema[0]))


#define NAME_FILESERVICE_1_FileDevice   (&(Names_FileService_1[0]))

// </NamespaceNameMacros>

// <StructDeclarations>
typedef struct _PWCHAR_LIST PWCHAR_LIST;
typedef struct _GET_FILE_LIST_RESPONSE GET_FILE_LIST_RESPONSE;
typedef struct _GET_FILE_REQUEST GET_FILE_REQUEST;
typedef struct _GET_FILE_RESPONSE GET_FILE_RESPONSE;
typedef struct _FILE_CHANGE_EVENT FILE_CHANGE_EVENT;

// </StructDeclarations>

// <StructDefinitions>
// 
// Structure definition PWCHAR_LIST
// 
struct _PWCHAR_LIST
{
    struct _PWCHAR_LIST* Next;
    const WCHAR* Element;
};

// 
// Structure definition GET_FILE_LIST_RESPONSE
// 
struct _GET_FILE_LIST_RESPONSE
{
    PWCHAR_LIST* FileList;
};

// 
// Structure definition GET_FILE_REQUEST
// 
struct _GET_FILE_REQUEST
{
    const WCHAR* filePath;
};

// 
// Structure definition GET_FILE_RESPONSE
// 
struct _GET_FILE_RESPONSE
{
    IWSDAttachment* Attachment;
};

// 
// Structure definition FILE_CHANGE_EVENT
// 
struct _FILE_CHANGE_EVENT
{
    const WCHAR* EventType;
    const WCHAR* FileName;
};

// </StructDefinitions>

// <EnumerationValueDeclarations>
// 
// FileChangeEventType Values
// 
#define FileChangeEventType_Added            L"Added"
#define FileChangeEventType_Removed          L"Removed"
#define FileChangeEventType_Modified         L"Modified"
#define FileChangeEventType_RenamedOldName   L"RenamedOldName"
#define FileChangeEventType_RenamedNewName   L"RenamedNewName"

// </EnumerationValueDeclarations>

// <TypeTableDeclarations>
#define TYPE_ENCODING_GET_FILE_LIST_RESPONSE WSDXML_TYPE_ENCODING(0,1)
extern WSDXML_TYPE Type_GET_FILE_LIST_RESPONSE;

#define TYPE_ENCODING_GET_FILE_REQUEST WSDXML_TYPE_ENCODING(1,1)
extern WSDXML_TYPE Type_GET_FILE_REQUEST;

#define TYPE_ENCODING_GET_FILE_RESPONSE WSDXML_TYPE_ENCODING(2,1)
extern WSDXML_TYPE Type_GET_FILE_RESPONSE;

#define TYPE_ENCODING_FILE_CHANGE_EVENT WSDXML_TYPE_ENCODING(3,1)
extern WSDXML_TYPE Type_FILE_CHANGE_EVENT;


extern WSDXML_TYPE* FileServiceTypes[4];

// FileServiceRegisterTypes is used to register field types
// with an XML context so it can look up matching type tables.
#define FileServiceRegisterTypes(pContext) pContext->SetTypes(FileServiceTypes,(sizeof(FileServiceTypes) / sizeof(FileServiceTypes[0])),1)

// </TypeTableDeclarations>

// <MessageStructureDefinitions>
//
// Port type http://www.example.com/ncd/FileService/FileService
// Message structure definitions
//
typedef struct
{
    GET_FILE_LIST_RESPONSE* parameters;
}
RESPONSEBODY_FileService_GetFileList;

typedef struct
{
    GET_FILE_REQUEST* parameters;
}
REQUESTBODY_FileService_GetFile;

typedef struct
{
    GET_FILE_RESPONSE* parameters;
}
RESPONSEBODY_FileService_GetFile;

typedef struct
{
    FILE_CHANGE_EVENT* result;
}
RESPONSEBODY_FileService_FileChangeEvent;

//
// Port type http://www.example.com/ncd/FileService/FileDevice
// Message structure definitions
//
// </MessageStructureDefinitions>

// <PortTypeDeclarations>
// 
// Port type http://www.example.com/ncd/FileService/FileService
// 
extern WSD_OPERATION Operations_FileService[3];
extern WSD_PORT_TYPE PortType_FileService;


// </PortTypeDeclarations>

// <RelationshipMetadataDeclaration>
extern WSD_HOST_METADATA hostMetadata;
// </RelationshipMetadataDeclaration>

// <ThisModelMetadataDeclaration>
extern WSD_THIS_MODEL_METADATA thisModelMetadata;
// </ThisModelMetadataDeclaration>

// <HostBuilderDeclaration>
HRESULT CreateFileServiceHost(
                LPCWSTR pszDeviceAddress,
                const WSD_THIS_DEVICE_METADATA* pThisDeviceMetadata,
                IFileService* pIFileService,
                IWSDDeviceHost** pHostOut,
                IWSDXMLContext** ppContextOut);
// </HostBuilderDeclaration>

// <StubDeclarations>
HRESULT __stdcall
Stub_GetFileList
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

HRESULT __stdcall
Stub_GetFile
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

// </StubDeclarations>

// <StubDeclarations>
HRESULT __stdcall
Stub_FileChangeEvent
(   IUnknown* server
,   IWSDServiceMessaging* service
,   WSD_EVENT* event
);

// </StubDeclarations>

