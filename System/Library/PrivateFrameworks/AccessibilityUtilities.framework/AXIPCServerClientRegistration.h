/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, AXIPCServerClientRegistrationDelegate;
@class NSString, NSObject;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;
	NSObject*<OS_dispatch_source> _invalidationSource;
	id<AXIPCServerClientRegistrationDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned port;                                                        //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> invalidationSource;                     //@synthesize invalidationSource=_invalidationSource - In the implementation block
@property (assign,nonatomic,__weak) id<AXIPCServerClientRegistrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id<AXIPCServerClientRegistrationDelegate>)delegate;
-(void)setDelegate:(id<AXIPCServerClientRegistrationDelegate>)arg1 ;
-(unsigned)port;
-(NSString *)identifier;
-(id)initWithPort:(unsigned)arg1 identifier:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)invalidationSource;
@end

