/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPeerIDQueryHandler.h>

@protocol IDSPeerIDQueryHandler <NSObject>
@required
-(BOOL)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(/*^block*/id)arg6;
-(void)addCompletionBlock:(/*^block*/id)arg1 forToken:(id)arg2;
-(void)removeCompletionBlockForToken:(id)arg1;

@end


@protocol IDSPeerIDNetworkChangeNotifier, IDSPeerIDPushHandler, IDSPeerIDQueryHandlerDelegate, IDSPeerIDQueryHandlerDataSource;
@class FTMessageDelivery_DualMode, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSPeerIDQueryHandler : NSObject <IDSPeerIDQueryHandler> {

	BOOL _isInServerBackoffMode;
	FTMessageDelivery_DualMode* _dualInterfaceidQueryMessageDelivery;
	NSMutableArray* _queryQueue;
	NSMutableDictionary* _completionBlocksToURIsMap;
	NSMutableDictionary* _extraCompletionBlocks;
	NSMutableDictionary* _disasterModeTokens;
	id<IDSPeerIDNetworkChangeNotifier> _networkChangeNotifier;
	id<IDSPeerIDPushHandler> _pushHandler;
	id<IDSPeerIDQueryHandlerDelegate> _delegate;
	id<IDSPeerIDQueryHandlerDataSource> _dataSource;

}

@property (nonatomic,retain) FTMessageDelivery_DualMode * dualInterfaceidQueryMessageDelivery;              //@synthesize dualInterfaceidQueryMessageDelivery=_dualInterfaceidQueryMessageDelivery - In the implementation block
@property (nonatomic,retain) NSMutableArray * queryQueue;                                                   //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionBlocksToURIsMap;                               //@synthesize completionBlocksToURIsMap=_completionBlocksToURIsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extraCompletionBlocks;                                   //@synthesize extraCompletionBlocks=_extraCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * disasterModeTokens;                                      //@synthesize disasterModeTokens=_disasterModeTokens - In the implementation block
@property (assign,nonatomic) BOOL isInServerBackoffMode;                                                    //@synthesize isInServerBackoffMode=_isInServerBackoffMode - In the implementation block
@property (nonatomic,retain) id<IDSPeerIDNetworkChangeNotifier> networkChangeNotifier;                      //@synthesize networkChangeNotifier=_networkChangeNotifier - In the implementation block
@property (nonatomic,retain) id<IDSPeerIDPushHandler> pushHandler;                                          //@synthesize pushHandler=_pushHandler - In the implementation block
@property (assign,nonatomic,__weak) id<IDSPeerIDQueryHandlerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<IDSPeerIDQueryHandlerDataSource> dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldUseSelfTokens;
+(BOOL)isServerBackoffModeActive;
+(BOOL)isQueryRetryForBadSignatureEnabled;
+(int)serverBackoffModeMaxSenderRetries;
+(int)queryRetryNumberForBadSignature;
+(double)queryRetryIntervalForBadSignature;
+(int)serverBackoffModeReceiverRetryInterval;
-(void)dealloc;
-(id<IDSPeerIDQueryHandlerDelegate>)delegate;
-(void)setDelegate:(id<IDSPeerIDQueryHandlerDelegate>)arg1 ;
-(void)setQueryQueue:(NSMutableArray *)arg1 ;
-(id<IDSPeerIDQueryHandlerDataSource>)dataSource;
-(void)setDataSource:(id<IDSPeerIDQueryHandlerDataSource>)arg1 ;
-(NSMutableArray *)queryQueue;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id<IDSPeerIDPushHandler>)pushHandler;
-(void)setPushHandler:(id<IDSPeerIDPushHandler>)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removeCompletionBlockForToken:(id)arg1 ;
-(NSMutableDictionary *)disasterModeTokens;
-(void)setDisasterModeTokens:(NSMutableDictionary *)arg1 ;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 dualMessageDelivery:(id)arg3 networkChangeNotifier:(id)arg4 pushHandler:(id)arg5 ;
-(void)_bagLoaded:(id)arg1 ;
-(void)_removeCompletionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_dequeuePendingQueryIfPossible;
-(id)_completionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(BOOL)_addCompletionBlock:(/*^block*/id)arg1 forURIs:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 ;
-(void)_startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(FTMessageDelivery_DualMode *)dualInterfaceidQueryMessageDelivery;
-(void)setDualInterfaceidQueryMessageDelivery:(FTMessageDelivery_DualMode *)arg1 ;
-(NSMutableDictionary *)completionBlocksToURIsMap;
-(void)setCompletionBlocksToURIsMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)extraCompletionBlocks;
-(void)setExtraCompletionBlocks:(NSMutableDictionary *)arg1 ;
-(BOOL)isInServerBackoffMode;
-(void)setIsInServerBackoffMode:(BOOL)arg1 ;
-(id<IDSPeerIDNetworkChangeNotifier>)networkChangeNotifier;
-(void)setNetworkChangeNotifier:(id<IDSPeerIDNetworkChangeNotifier>)arg1 ;
@end

