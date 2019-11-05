/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/AVContentKeySessionDelegate.h>

@class AVContentKeySession, IKAppMediaItemBridge, NSArray, NSString;

@interface _TVSecureKeyLoader : NSObject <AVContentKeySessionDelegate> {

	AVContentKeySession* _contentKeySession;
	IKAppMediaItemBridge* _mediaItemBridge;

}

@property (nonatomic,readonly) AVContentKeySession * contentKeySession;                    //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,__weak,readonly) IKAppMediaItemBridge * mediaItemBridge;              //@synthesize mediaItemBridge=_mediaItemBridge - In the implementation block
@property (readonly) NSArray * contentKeyRecipients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVContentKeySession *)contentKeySession;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2 ;
-(void)addContentKeyRecipient:(id)arg1 ;
-(void)removeContentKeyRecipient:(id)arg1 ;
-(NSArray *)contentKeyRecipients;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(IKAppMediaItemBridge *)mediaItemBridge;
-(id)initWithMediaItemBridge:(id)arg1 ;
-(void)_processContentKeyRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

