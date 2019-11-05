/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel {

	NSURL* _sourceURL;
	VSMessageQueue* _messagesToWeb;
	VSMessageQueue* _messagesFromWeb;

}

@property (nonatomic,copy) NSURL * sourceURL;                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesToWeb;                //@synthesize messagesToWeb=_messagesToWeb - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesFromWeb;              //@synthesize messagesFromWeb=_messagesFromWeb - In the implementation block
-(id)init;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(VSMessageQueue *)messagesToWeb;
-(VSMessageQueue *)messagesFromWeb;
@end

