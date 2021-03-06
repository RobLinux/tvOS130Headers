/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class SSSQLiteDatabase, DownloadPolicyManager;

@interface DatabaseSessionDescriptor : NSObject <NSCopying> {

	SSSQLiteDatabase* _database;
	DownloadPolicyManager* _policyManager;

}

@property (nonatomic,retain) SSSQLiteDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) DownloadPolicyManager * policyManager;              //@synthesize policyManager=_policyManager - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSSQLiteDatabase *)database;
-(void)setDatabase:(SSSQLiteDatabase *)arg1 ;
-(DownloadPolicyManager *)policyManager;
-(void)setPolicyManager:(DownloadPolicyManager *)arg1 ;
@end

