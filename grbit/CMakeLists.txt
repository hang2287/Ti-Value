cmake_minimum_required(VERSION 3.5)
project(grbit)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    libraries/api/ConversionFunctions.cpp
    libraries/api/GlobalApiLogger.cpp
    libraries/blockchain/AccountEntry.cpp
    libraries/blockchain/AccountOperations.cpp
    libraries/blockchain/Address.cpp
    libraries/blockchain/applink.c
    libraries/blockchain/Asset.cpp
    libraries/blockchain/AssetEntry.cpp
    libraries/blockchain/AssetOperations.cpp
    libraries/blockchain/BalanceEntry.cpp
    libraries/blockchain/BalanceOperations.cpp
    libraries/blockchain/Block.cpp
    libraries/blockchain/ChainDatabase.cpp
    libraries/blockchain/ChainDatabaseV1.cpp
    libraries/blockchain/ChainDatabaseV2.cpp
    libraries/blockchain/ChainInterface.cpp
    libraries/blockchain/ChainInterfaceV1.cpp
    libraries/blockchain/ContractEntry.cpp
    libraries/blockchain/ContractOperations.cpp
    libraries/blockchain/EventOperations.cpp
    libraries/blockchain/ExtendedAddress.cpp
    libraries/blockchain/ForkBlocks.cpp
    libraries/blockchain/GenesisJson-online.cpp
    libraries/blockchain/GenesisJson-test.cpp
    libraries/blockchain/GenesisJson.cpp
    libraries/blockchain/ImessageOperations.cpp
    libraries/blockchain/Operations.cpp
    libraries/blockchain/PendingChainState.cpp
    libraries/blockchain/PropertyEntry.cpp
    libraries/blockchain/PtsAddress.cpp
    libraries/blockchain/SlateEntry.cpp
    libraries/blockchain/SlateOperations.cpp
    libraries/blockchain/SlotEntry.cpp
    libraries/blockchain/StorageOperations.cpp
    libraries/blockchain/StorageTypes.cpp
    libraries/blockchain/Time.cpp
    libraries/blockchain/Transaction.cpp
    libraries/blockchain/TransactionCreationState.cpp
    libraries/blockchain/TransactionEntry.cpp
    libraries/blockchain/TransactionEvaluationState.cpp
    libraries/blockchain/TransactionOperations.cpp
    libraries/blockchain/Types.cpp
    libraries/blockchain/WithdrawTypes.cpp
    libraries/cli/Cli.cpp
    libraries/cli/Pretty.cpp
    libraries/cli/PrintResult.cpp
    libraries/client/ApiLogger.cpp
    libraries/client/BlockchainApi.cpp
    libraries/client/Client.cpp
    libraries/client/ContractApi.cpp
    libraries/client/DebugApi.cpp
    libraries/client/DelegateApi.cpp
    libraries/client/GeneralApi.cpp
    libraries/client/Messages.cpp
    libraries/client/NetworkApi.cpp
    libraries/client/Notifier.cpp
    libraries/client/SandboxContractApi.cpp
    libraries/client/ScriptApi.cpp
    libraries/client/WalletApi.cpp
    libraries/db/UpgradeLeveldb.cpp
    libraries/include/api/ApiMetadata.hpp
    libraries/include/api/CommonApi.hpp
    libraries/include/api/ConversionFunctions.hpp
    libraries/include/api/GlobalApiLogger.hpp
    libraries/include/blockchain/AccountEntry.hpp
    libraries/include/blockchain/AccountOperations.hpp
    libraries/include/blockchain/Address.hpp
    libraries/include/blockchain/Asset.hpp
    libraries/include/blockchain/AssetEntry.hpp
    libraries/include/blockchain/AssetOperations.hpp
    libraries/include/blockchain/BalanceEntry.hpp
    libraries/include/blockchain/BalanceOperations.hpp
    libraries/include/blockchain/Block.hpp
    libraries/include/blockchain/BlockEntry.hpp
    libraries/include/blockchain/ChainDatabase.hpp
    libraries/include/blockchain/ChainDatabaseImpl.hpp
    libraries/include/blockchain/ChainInterface.hpp
    libraries/include/blockchain/Checkpoints.hpp
    libraries/include/blockchain/Condition.hpp
    libraries/include/blockchain/Config.hpp
    libraries/include/blockchain/ContractEntry.hpp
    libraries/include/blockchain/ContractOperations.hpp
    libraries/include/blockchain/DelegateConfig.hpp
    libraries/include/blockchain/EventOperations.hpp
    libraries/include/blockchain/Exceptions.hpp
    libraries/include/blockchain/ExtendedAddress.hpp
    libraries/include/blockchain/ForkBlocks.hpp
    libraries/include/blockchain/GenesisJson.hpp
    libraries/include/blockchain/GenesisState.hpp
    libraries/include/blockchain/ImessageOperations.hpp
    libraries/include/blockchain/OperationFactory.hpp
    libraries/include/blockchain/Operations.hpp
    libraries/include/blockchain/PendingChainState.hpp
    libraries/include/blockchain/PropertyEntry.hpp
    libraries/include/blockchain/PtsAddress.hpp
    libraries/include/blockchain/SlateEntry.hpp
    libraries/include/blockchain/SlateOperations.hpp
    libraries/include/blockchain/SlotEntry.hpp
    libraries/include/blockchain/StorageOperations.hpp
    libraries/include/blockchain/StorageTypes.hpp
    libraries/include/blockchain/Time.hpp
    libraries/include/blockchain/Transaction.hpp
    libraries/include/blockchain/TransactionCreationState.hpp
    libraries/include/blockchain/TransactionEntry.hpp
    libraries/include/blockchain/TransactionEvaluationState.hpp
    libraries/include/blockchain/TransactionOperations.hpp
    libraries/include/blockchain/Types.hpp
    libraries/include/blockchain/WithdrawTypes.hpp
    libraries/include/cli/Cli.hpp
    libraries/include/cli/locale.hpp
    libraries/include/cli/Pretty.hpp
    libraries/include/cli/PrintResult.hpp
    libraries/include/client/ApiLogger.hpp
    libraries/include/client/Client.hpp
    libraries/include/client/ClientImpl.hpp
    libraries/include/client/Messages.hpp
    libraries/include/client/Notifier.hpp
    libraries/include/client/SeedNodes.hpp
    libraries/include/db/CachedLevelMap.hpp
    libraries/include/db/Exception.hpp
    libraries/include/db/FastLevelMap.hpp
    libraries/include/db/FsHashMap.hpp
    libraries/include/db/Fwd.hpp
    libraries/include/db/LevelMap.hpp
    libraries/include/db/LevelPodMap.hpp
    libraries/include/db/UpgradeLeveldb.hpp
    libraries/include/lua/goopal_ltests.h
    libraries/include/lua/goopal_lua_api.h
    libraries/include/lua/goopal_lua_lib.h
    libraries/include/lua/goopal_lua_parser.h
    libraries/include/lua/goopal_lutil.h
    libraries/include/lua/lapi.h
    libraries/include/lua/lauxlib.h
    libraries/include/lua/lcode.h
    libraries/include/lua/lcompile.h
    libraries/include/lua/lctype.h
    libraries/include/lua/ldebug.h
    libraries/include/lua/ldo.h
    libraries/include/lua/lfunc.h
    libraries/include/lua/lgc.h
    libraries/include/lua/lhashmap.h
    libraries/include/lua/llex.h
    libraries/include/lua/llimits.h
    libraries/include/lua/lmem.h
    libraries/include/lua/lobject.h
    libraries/include/lua/lopcodes.h
    libraries/include/lua/lparser.h
    libraries/include/lua/lparsercombinator.h
    libraries/include/lua/lprefix.h
    libraries/include/lua/lrepl.h
    libraries/include/lua/lstate.h
    libraries/include/lua/lstring.h
    libraries/include/lua/ltable.h
    libraries/include/lua/ltm.h
    libraries/include/lua/ltypechecker.h
    libraries/include/lua/lua.h
    libraries/include/lua/lua.hpp
    libraries/include/lua/lua_astparser.h
    libraries/include/lua/lua_loader.h
    libraries/include/lua/lua_tokenparser.h
    libraries/include/lua/luaconf.h
    libraries/include/lua/lualib.h
    libraries/include/lua/lundump.h
    libraries/include/lua/lvm.h
    libraries/include/lua/lzio.h
    libraries/include/net/ChainConnection.hpp
    libraries/include/net/ChainDownloader.hpp
    libraries/include/net/ChainMessages.hpp
    libraries/include/net/ChainServer.hpp
    libraries/include/net/ChainServerCommands.hpp
    libraries/include/net/Config.hpp
    libraries/include/net/Connection.hpp
    libraries/include/net/CoreMessages.hpp
    libraries/include/net/Exceptions.hpp
    libraries/include/net/Message.hpp
    libraries/include/net/MessageOrientedConnection.hpp
    libraries/include/net/Node.hpp
    libraries/include/net/PeerConnection.hpp
    libraries/include/net/PeerDatabase.hpp
    libraries/include/net/StcpSocket.hpp
    libraries/include/net/Upnp.hpp
    libraries/include/rpc/Exceptions.hpp
    libraries/include/rpc/RpcClient.hpp
    libraries/include/rpc/RpcClientApi.hpp
    libraries/include/rpc/RpcServer.hpp
    libraries/include/rpc_stubs/CommonApiClient.hpp
    libraries/include/rpc_stubs/CommonApiRpcClient.hpp
    libraries/include/rpc_stubs/CommonApiRpcServer.hpp
    libraries/include/UnitTest++/Posix/SignalTranslator.h
    libraries/include/UnitTest++/Posix/TimeHelpers.h
    libraries/include/UnitTest++/Win32/TimeHelpers.h
    libraries/include/UnitTest++/AssertException.h
    libraries/include/UnitTest++/CheckMacros.h
    libraries/include/UnitTest++/Checks.h
    libraries/include/UnitTest++/CompositeTestReporter.h
    libraries/include/UnitTest++/Config.h
    libraries/include/UnitTest++/CurrentTest.h
    libraries/include/UnitTest++/DeferredTestReporter.h
    libraries/include/UnitTest++/DeferredTestResult.h
    libraries/include/UnitTest++/ExceptionMacros.h
    libraries/include/UnitTest++/ExecuteTest.h
    libraries/include/UnitTest++/HelperMacros.h
    libraries/include/UnitTest++/MemoryOutStream.h
    libraries/include/UnitTest++/ReportAssert.h
    libraries/include/UnitTest++/ReportAssertImpl.h
    libraries/include/UnitTest++/RequiredCheckException.h
    libraries/include/UnitTest++/RequiredCheckTestReporter.h
    libraries/include/UnitTest++/RequireMacros.h
    libraries/include/UnitTest++/Test.h
    libraries/include/UnitTest++/TestDetails.h
    libraries/include/UnitTest++/TestList.h
    libraries/include/UnitTest++/TestMacros.h
    libraries/include/UnitTest++/TestReporter.h
    libraries/include/UnitTest++/TestReporterStdout.h
    libraries/include/UnitTest++/TestResults.h
    libraries/include/UnitTest++/TestRunner.h
    libraries/include/UnitTest++/TestSuite.h
    libraries/include/UnitTest++/ThrowingTestReporter.h
    libraries/include/UnitTest++/TimeConstraint.h
    libraries/include/UnitTest++/TimeHelpers.h
    libraries/include/UnitTest++/UnitTest++.h
    libraries/include/UnitTest++/UnitTestPP.h
    libraries/include/UnitTest++/XmlTestReporter.h
    libraries/include/utilities/GitRevision.hpp
    libraries/include/utilities/KeyConversion.hpp
    libraries/include/utilities/PaddingOstream.hpp
    libraries/include/utilities/StringEscape.hpp
    libraries/include/utilities/Words.hpp
    libraries/include/wallet/Config.hpp
    libraries/include/wallet/Exceptions.hpp
    libraries/include/wallet/Pretty.hpp
    libraries/include/wallet/TransactionBuilder.hpp
    libraries/include/wallet/Url.hpp
    libraries/include/wallet/Wallet.hpp
    libraries/include/wallet/WalletDb.hpp
    libraries/include/wallet/WalletEntrys.hpp
    libraries/include/wallet/WalletImpl.hpp
    libraries/lua/cdemo1.cpp
    libraries/lua/goopal_ltests.cpp
    libraries/lua/goopal_lua_api.cpp
    libraries/lua/goopal_lua_api.demo.cpp
    libraries/lua/goopal_lua_lib.cpp
    libraries/lua/goopal_lutil.cpp
    libraries/lua/lapi.cpp
    libraries/lua/lauxlib.cpp
    libraries/lua/lbaselib.cpp
    libraries/lua/lbitlib.cpp
    libraries/lua/lcode.cpp
    libraries/lua/lcompile.cpp
    libraries/lua/lcorolib.cpp
    libraries/lua/lctype.cpp
    libraries/lua/ldblib.cpp
    libraries/lua/ldebug.cpp
    libraries/lua/ldo.cpp
    libraries/lua/ldump.cpp
    libraries/lua/lfunc.cpp
    libraries/lua/lgc.cpp
    libraries/lua/lgoopallib.cpp
    libraries/lua/lhashmap.cpp
    libraries/lua/linit.cpp
    libraries/lua/liolib.cpp
    libraries/lua/ljsonlib.cpp
    libraries/lua/llex.cpp
    libraries/lua/lmath2lib.cpp
    libraries/lua/lmathlib.cpp
    libraries/lua/lmem.cpp
    libraries/lua/loadlib.cpp
    libraries/lua/lobject.cpp
    libraries/lua/lopcodes.cpp
    libraries/lua/loslib.cpp
    libraries/lua/lparser.cpp
    libraries/lua/lparsercombinator.cpp
    libraries/lua/lprefix.cpp
    libraries/lua/lrepl.cpp
    libraries/lua/lstate.cpp
    libraries/lua/lstring.cpp
    libraries/lua/lstrlib.cpp
    libraries/lua/ltable.cpp
    libraries/lua/ltablib.cpp
    libraries/lua/ltimelib.cpp
    libraries/lua/ltm.cpp
    libraries/lua/ltypechecker.cpp
    libraries/lua/lua.cpp
    libraries/lua/lua_astparser.cpp
    libraries/lua/lua_loader.cpp
    libraries/lua/lua_state_scope.cpp
    libraries/lua/lua_tokenparser.cpp
    libraries/lua/luac.cpp
    libraries/lua/lundump.cpp
    libraries/lua/lutf8lib.cpp
    libraries/lua/lvm.cpp
    libraries/lua/lzio.cpp
    libraries/net/ChainDownloader.cpp
    libraries/net/ChainServer.cpp
    libraries/net/CoreMessages.cpp
    libraries/net/MessageOrientedConnection.cpp
    libraries/net/Node.cpp
    libraries/net/PeerConnection.cpp
    libraries/net/PeerDatabase.cpp
    libraries/net/StcpSocket.cpp
    libraries/net/Upnp.cpp
    libraries/rpc/RpcClient.cpp
    libraries/rpc/RpcServer.cpp
    libraries/rpc_stubs/CommonApiClient.cpp
    libraries/rpc_stubs/CommonApiRpcClient.cpp
    libraries/rpc_stubs/CommonApiRpcServer.cpp
    libraries/UnitTest++/Posix/SignalTranslator.cpp
    libraries/UnitTest++/Posix/TimeHelpers.cpp
    libraries/UnitTest++/Win32/TimeHelpers.cpp
    libraries/UnitTest++/AssertException.cpp
    libraries/UnitTest++/Checks.cpp
    libraries/UnitTest++/CompositeTestReporter.cpp
    libraries/UnitTest++/CurrentTest.cpp
    libraries/UnitTest++/DeferredTestReporter.cpp
    libraries/UnitTest++/DeferredTestResult.cpp
    libraries/UnitTest++/MemoryOutStream.cpp
    libraries/UnitTest++/ReportAssert.cpp
    libraries/UnitTest++/RequiredCheckException.cpp
    libraries/UnitTest++/RequiredCheckTestReporter.cpp
    libraries/UnitTest++/Test.cpp
    libraries/UnitTest++/TestDetails.cpp
    libraries/UnitTest++/TestList.cpp
    libraries/UnitTest++/TestReporter.cpp
    libraries/UnitTest++/TestReporterStdout.cpp
    libraries/UnitTest++/TestResults.cpp
    libraries/UnitTest++/TestRunner.cpp
    libraries/UnitTest++/ThrowingTestReporter.cpp
    libraries/UnitTest++/TimeConstraint.cpp
    libraries/UnitTest++/XmlTestReporter.cpp
    libraries/utilities/GitRevision.cpp
    libraries/utilities/KeyConversion.cpp
    libraries/utilities/StringEscape.cpp
    libraries/utilities/Words.cpp
    libraries/wallet/Login.cpp
    libraries/wallet/TransactionBuilder.cpp
    libraries/wallet/TransactionLedger.cpp
    libraries/wallet/TransactionLedgerExperimental.cpp
    libraries/wallet/Wallet.cpp
    libraries/wallet/WalletDb.cpp
    libraries/wallet/WalletEntrys.cpp
    main.cpp)

add_executable(grbit ${SOURCE_FILES})