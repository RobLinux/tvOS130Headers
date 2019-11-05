/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSServerSideConfigProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL;

@interface MSServerSideConfigProtocol : NSObject {

	id<MSServerSideConfigProtocolDelegate> _delegate;
	NSString* _personID;
	NSURL* _configURL;
	MSSSCPCContext* _context;

}

@property (assign,nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                        //@synthesize personID=_personID - In the implementation block
-(void)dealloc;
-(id<MSServerSideConfigProtocolDelegate>)delegate;
-(void)setDelegate:(id<MSServerSideConfigProtocolDelegate>)arg1 ;
-(void)abort;
-(NSString *)personID;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)queryConfiguration;
-(void)_didFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
@end

