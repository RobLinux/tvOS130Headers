/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSSystemAccount : NSObject {

	NSString* _username;
	NSString* _DSID;

}

@property (nonatomic,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * DSID;                  //@synthesize DSID=_DSID - In the implementation block
-(id)description;
-(NSString *)username;
-(NSString *)DSID;
-(id)initWithUsername:(id)arg1 DSID:(id)arg2 ;
@end

