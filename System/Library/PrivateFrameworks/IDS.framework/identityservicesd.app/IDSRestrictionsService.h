/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSRestrictionsService : NSObject {

	BOOL _disableService;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(BOOL)disableService;
-(void)setDisableService:(BOOL)arg1 ;
@end

