/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject {

	NSString* _body;
	VSScriptSecurityOrigin* _source;
	VSScriptSecurityOrigin* _target;

}

@property (nonatomic,copy) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * target;              //@synthesize target=_target - In the implementation block
-(id)description;
-(void)setSource:(VSScriptSecurityOrigin *)arg1 ;
-(void)setTarget:(VSScriptSecurityOrigin *)arg1 ;
-(VSScriptSecurityOrigin *)target;
-(VSScriptSecurityOrigin *)source;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
@end

