/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/AVContentKeySessionDelegate.h>

@protocol TVPContentKeyLoading;
@class AVContentKeySession, NSObject, NSArray, NSMutableArray, NSString;

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate> {

	BOOL _offlineKeyGenerationIsForRenewal;
	AVContentKeySession* _contentKeySession;
	NSObject*<TVPContentKeyLoading> _contentKeyLoader;
	/*^block*/id _offlineKeyGenerationCompletionHandler;
	NSArray* _offlineKeyIdentifiersInProgress;
	NSMutableArray* _keyRequestsInProgress;

}

@property (nonatomic,retain) AVContentKeySession * contentKeySession;                       //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,retain) NSObject*<TVPContentKeyLoading> contentKeyLoader;              //@synthesize contentKeyLoader=_contentKeyLoader - In the implementation block
@property (nonatomic,copy) id offlineKeyGenerationCompletionHandler;                        //@synthesize offlineKeyGenerationCompletionHandler=_offlineKeyGenerationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSArray * offlineKeyIdentifiersInProgress;                     //@synthesize offlineKeyIdentifiersInProgress=_offlineKeyIdentifiersInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyRequestsInProgress;                        //@synthesize keyRequestsInProgress=_keyRequestsInProgress - In the implementation block
@property (assign,nonatomic) BOOL offlineKeyGenerationIsForRenewal;                         //@synthesize offlineKeyGenerationIsForRenewal=_offlineKeyGenerationIsForRenewal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(AVContentKeySession *)contentKeySession;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)finishKeyRequest:(id)arg1 ;
-(void)setContentKeySession:(AVContentKeySession *)arg1 ;
-(id)initWithContentKeyLoader:(id)arg1 avAsset:(id)arg2 ;
-(NSObject*<TVPContentKeyLoading>)contentKeyLoader;
-(void)_loadAVContentKeyRequests:(id)arg1 type:(long long)arg2 isRenewal:(BOOL)arg3 ;
-(void)setContentKeyLoader:(NSObject*<TVPContentKeyLoading>)arg1 ;
-(id)offlineKeyGenerationCompletionHandler;
-(void)setOfflineKeyGenerationCompletionHandler:(id)arg1 ;
-(NSArray *)offlineKeyIdentifiersInProgress;
-(void)setOfflineKeyIdentifiersInProgress:(NSArray *)arg1 ;
-(NSMutableArray *)keyRequestsInProgress;
-(void)setKeyRequestsInProgress:(NSMutableArray *)arg1 ;
-(BOOL)offlineKeyGenerationIsForRenewal;
-(void)setOfflineKeyGenerationIsForRenewal:(BOOL)arg1 ;
@end

