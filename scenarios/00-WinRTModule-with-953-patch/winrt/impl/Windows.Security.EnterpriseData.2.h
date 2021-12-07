// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Security_EnterpriseData_2_H
#define WINRT_Windows_Security_EnterpriseData_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Security.EnterpriseData.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData
{
    struct __declspec(empty_bases) BufferProtectUnprotectResult : winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult
    {
        BufferProtectUnprotectResult(std::nullptr_t) noexcept {}
        BufferProtectUnprotectResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DataProtectionInfo : winrt::Windows::Security::EnterpriseData::IDataProtectionInfo
    {
        DataProtectionInfo(std::nullptr_t) noexcept {}
        DataProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IDataProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct DataProtectionManager
    {
        DataProtectionManager() = delete;
        static auto ProtectAsync(winrt::Windows::Storage::Streams::IBuffer const& data, param::hstring const& identity);
        static auto UnprotectAsync(winrt::Windows::Storage::Streams::IBuffer const& data);
        static auto ProtectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& unprotectedStream, param::hstring const& identity, winrt::Windows::Storage::Streams::IOutputStream const& protectedStream);
        static auto UnprotectStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream, winrt::Windows::Storage::Streams::IOutputStream const& unprotectedStream);
        static auto GetProtectionInfoAsync(winrt::Windows::Storage::Streams::IBuffer const& protectedData);
        static auto GetStreamProtectionInfoAsync(winrt::Windows::Storage::Streams::IInputStream const& protectedStream);
    };
    struct __declspec(empty_bases) FileProtectionInfo : winrt::Windows::Security::EnterpriseData::IFileProtectionInfo,
        impl::require<FileProtectionInfo, winrt::Windows::Security::EnterpriseData::IFileProtectionInfo2>
    {
        FileProtectionInfo(std::nullptr_t) noexcept {}
        FileProtectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IFileProtectionInfo(ptr, take_ownership_from_abi) {}
    };
    struct FileProtectionManager
    {
        FileProtectionManager() = delete;
        static auto ProtectAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static auto CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& source, winrt::Windows::Storage::IStorageItem const& target);
        static auto GetProtectionInfoAsync(winrt::Windows::Storage::IStorageItem const& source);
        static auto SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile);
        static auto LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile);
        static auto LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target);
        static auto CreateProtectedAndOpenAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& desiredName, param::hstring const& identity, winrt::Windows::Storage::CreationCollisionOption const& collisionOption);
        static auto IsContainerAsync(winrt::Windows::Storage::IStorageFile const& file);
        static auto LoadFileFromContainerAsync(winrt::Windows::Storage::IStorageFile const& containerFile, winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Storage::NameCollisionOption const& collisionOption);
        static auto SaveFileAsContainerAsync(winrt::Windows::Storage::IStorageFile const& protectedFile, param::async_iterable<hstring> const& sharedWithIdentities);
        static auto UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target);
        static auto UnprotectAsync(winrt::Windows::Storage::IStorageItem const& target, winrt::Windows::Security::EnterpriseData::FileUnprotectOptions const& options);
    };
    struct FileRevocationManager
    {
        FileRevocationManager() = delete;
        static auto ProtectAsync(winrt::Windows::Storage::IStorageItem const& storageItem, param::hstring const& enterpriseIdentity);
        static auto CopyProtectionAsync(winrt::Windows::Storage::IStorageItem const& sourceStorageItem, winrt::Windows::Storage::IStorageItem const& targetStorageItem);
        static auto Revoke(param::hstring const& enterpriseIdentity);
        static auto GetStatusAsync(winrt::Windows::Storage::IStorageItem const& storageItem);
    };
    struct __declspec(empty_bases) FileUnprotectOptions : winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions
    {
        FileUnprotectOptions(std::nullptr_t) noexcept {}
        FileUnprotectOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IFileUnprotectOptions(ptr, take_ownership_from_abi) {}
        explicit FileUnprotectOptions(bool audit);
    };
    struct __declspec(empty_bases) ProtectedAccessResumedEventArgs : winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs
    {
        ProtectedAccessResumedEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessResumedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedAccessSuspendingEventArgs : winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs
    {
        ProtectedAccessSuspendingEventArgs(std::nullptr_t) noexcept {}
        ProtectedAccessSuspendingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContainerExportResult : winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult
    {
        ProtectedContainerExportResult(std::nullptr_t) noexcept {}
        ProtectedContainerExportResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedContainerExportResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContainerImportResult : winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult
    {
        ProtectedContainerImportResult(std::nullptr_t) noexcept {}
        ProtectedContainerImportResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedContainerImportResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedContentRevokedEventArgs : winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs
    {
        ProtectedContentRevokedEventArgs(std::nullptr_t) noexcept {}
        ProtectedContentRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectedFileCreateResult : winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult
    {
        ProtectedFileCreateResult(std::nullptr_t) noexcept {}
        ProtectedFileCreateResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectedFileCreateResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ProtectionPolicyAuditInfo : winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo
    {
        ProtectionPolicyAuditInfo(std::nullptr_t) noexcept {}
        ProtectionPolicyAuditInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo(ptr, take_ownership_from_abi) {}
        ProtectionPolicyAuditInfo(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription, param::hstring const& sourceDescription, param::hstring const& targetDescription);
        ProtectionPolicyAuditInfo(winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction const& action, param::hstring const& dataDescription);
    };
    struct __declspec(empty_bases) ProtectionPolicyManager : winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager,
        impl::require<ProtectionPolicyManager, winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager2>
    {
        ProtectionPolicyManager(std::nullptr_t) noexcept {}
        ProtectionPolicyManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IProtectionPolicyManager(ptr, take_ownership_from_abi) {}
        static auto IsIdentityManaged(param::hstring const& identity);
        static auto TryApplyProcessUIPolicy(param::hstring const& identity);
        static auto ClearProcessUIPolicy();
        static auto CreateCurrentThreadNetworkContext(param::hstring const& identity);
        static auto GetPrimaryManagedIdentityForNetworkEndpointAsync(winrt::Windows::Networking::HostName const& endpointHost);
        static auto RevokeContent(param::hstring const& identity);
        static auto GetForCurrentView();
        static auto ProtectedAccessSuspending(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        using ProtectedAccessSuspending_revoker = impl::factory_event_revoker<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessSuspending>;
        [[nodiscard]] static ProtectedAccessSuspending_revoker ProtectedAccessSuspending(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> const& handler);
        static auto ProtectedAccessSuspending(winrt::event_token const& token);
        static auto ProtectedAccessResumed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        using ProtectedAccessResumed_revoker = impl::factory_event_revoker<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedAccessResumed>;
        [[nodiscard]] static ProtectedAccessResumed_revoker ProtectedAccessResumed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> const& handler);
        static auto ProtectedAccessResumed(winrt::event_token const& token);
        static auto ProtectedContentRevoked(winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        using ProtectedContentRevoked_revoker = impl::factory_event_revoker<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics, &impl::abi_t<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>::remove_ProtectedContentRevoked>;
        [[nodiscard]] static ProtectedContentRevoked_revoker ProtectedContentRevoked(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> const& handler);
        static auto ProtectedContentRevoked(winrt::event_token const& token);
        static auto CheckAccess(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity);
        static auto HasContentBeenRevokedSince(param::hstring const& identity, winrt::Windows::Foundation::DateTime const& since);
        static auto CheckAccessForApp(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName);
        static auto GetEnforcementLevel(param::hstring const& identity);
        static auto IsUserDecryptionAllowed(param::hstring const& identity);
        static auto IsProtectionUnderLockRequired(param::hstring const& identity);
        static auto PolicyChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using PolicyChanged_revoker = impl::factory_event_revoker<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2, &impl::abi_t<winrt::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>::remove_PolicyChanged>;
        [[nodiscard]] static PolicyChanged_revoker PolicyChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto PolicyChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsProtectionEnabled();
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp);
        static auto LogAuditEvent(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto IsRoamableProtectionEnabled(param::hstring const& identity);
        static auto RequestAccessAsync(param::hstring const& sourceIdentity, param::hstring const& targetIdentity, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessForAppAsync(param::hstring const& sourceIdentity, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessToFilesForAppAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, param::hstring const& appPackageFamilyName, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo);
        static auto RequestAccessToFilesForProcessAsync(param::async_iterable<winrt::Windows::Storage::IStorageItem> const& sourceItemList, uint32_t processId, winrt::Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo const& auditInfo, param::hstring const& messageFromApp, winrt::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior const& behavior);
        static auto IsFileProtectionRequiredAsync(winrt::Windows::Storage::IStorageItem const& target, param::hstring const& identity);
        static auto IsFileProtectionRequiredForNewFileAsync(winrt::Windows::Storage::IStorageFolder const& parentFolder, param::hstring const& identity, param::hstring const& desiredName);
        [[nodiscard]] static auto PrimaryManagedIdentity();
        static auto GetPrimaryManagedIdentityForIdentity(param::hstring const& identity);
    };
    struct __declspec(empty_bases) ThreadNetworkContext : winrt::Windows::Security::EnterpriseData::IThreadNetworkContext,
        impl::require<ThreadNetworkContext, winrt::Windows::Foundation::IClosable>
    {
        ThreadNetworkContext(std::nullptr_t) noexcept {}
        ThreadNetworkContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::EnterpriseData::IThreadNetworkContext(ptr, take_ownership_from_abi) {}
    };
}
#endif