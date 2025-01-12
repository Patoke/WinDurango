#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> TitleStorageService::GetQuotaAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> TitleStorageService::GetQuotaForSessionStorageAsync(hstring serviceConfigurationId, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType, hstring blobPath, hstring xboxUserId, uint32_t skipItems, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataForSessionStorageAsync(hstring serviceConfigurationId, hstring blobPath, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName, uint32_t skipItems, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction TitleStorageService::DeleteBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, bool deleteOnlyIfETagMatches)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery, uint32_t preferredDownloadBlockSize)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> TitleStorageService::UploadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, uint32_t preferredUploadBlockSize)
    {
        throw hresult_not_implemented();
    }
}