/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface AppStateTracker : NSObject {

	int _pid;
	unsigned _state;
	NSString* _displayName;
	NSString* _bundleName;
	NSUUID* _uuid;

}

@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (assign) unsigned state;                      //@synthesize state=_state - In the implementation block
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSUUID *)uuid;
-(NSString *)displayName;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

