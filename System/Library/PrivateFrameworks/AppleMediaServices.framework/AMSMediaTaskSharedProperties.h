/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSMediaTokenServiceProtocol;
@class AMSURLSession;

@interface AMSMediaTaskSharedProperties : NSObject {

	AMSURLSession* _session;
	id<AMSMediaTokenServiceProtocol> _tokenService;

}

@property (nonatomic,readonly) AMSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<AMSMediaTokenServiceProtocol> tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
+(id)accessQueue;
+(id)propertiesForMediaTask:(id)arg1 ;
+(id)sharedPropertiesMapTable;
-(void)dealloc;
-(AMSURLSession *)session;
-(id<AMSMediaTokenServiceProtocol>)tokenService;
-(id)initWithMediaTask:(id)arg1 ;
@end

