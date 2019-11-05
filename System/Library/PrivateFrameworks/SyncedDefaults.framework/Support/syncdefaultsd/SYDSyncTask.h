/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYDApplication, NSDictionary, NSString;

@interface SYDSyncTask : NSObject {

	int _reason;
	SYDApplication* _app;
	unsigned long long _rank;
	NSDictionary* _changes;
	unsigned long long _syncIdentifier;

}

@property (nonatomic,retain) SYDApplication * app;                           //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) int reason;                                     //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                        //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,retain) NSDictionary * changes;                         //@synthesize changes=_changes - In the implementation block
@property (assign,nonatomic) unsigned long long syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
-(id)description;
-(int)reason;
-(NSString *)bundleIdentifier;
-(NSDictionary *)changes;
-(void)setReason:(int)arg1 ;
-(NSString *)storeIdentifier;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(unsigned long long)syncIdentifier;
-(SYDApplication *)app;
-(void)setApp:(SYDApplication *)arg1 ;
-(void)setChanges:(NSDictionary *)arg1 ;
-(id)initWithApplication:(id)arg1 reason:(int)arg2 rank:(unsigned long long)arg3 ;
-(void)setSyncIdentifier:(unsigned long long)arg1 ;
@end
