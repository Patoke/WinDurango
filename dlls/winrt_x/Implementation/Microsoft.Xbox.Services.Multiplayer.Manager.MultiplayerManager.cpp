#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.cpp"

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

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerManager MultiplayerManager::SingletonInstance()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::Initialize(hstring const& lobbySessionTemplateName)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::FindMatch(hstring const& hopperName, hstring const& attributes, winrt::Windows::Foundation::TimeSpan const& timeout)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::CancelMatch()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Xbox::System::User const& user)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Xbox::System::User const& user)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::InvitePartyToGame()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGameFromLobby(hstring const& sessionTemplateName)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::LeaveGame()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEvent> MultiplayerManager::DoWork()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus MultiplayerManager::MatchStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerManager::EstimatedMatchWaitTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerLobbySession MultiplayerManager::LobbySession()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerGameSession MultiplayerManager::GameSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability MultiplayerManager::Joinability()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::SetJoinInProgress(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability const& value)
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerManager::AutoFillMembersDuringMatchmaking()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::AutoFillMembersDuringMatchmaking(bool value)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerManager::SetQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        throw hresult_not_implemented();
    }
}