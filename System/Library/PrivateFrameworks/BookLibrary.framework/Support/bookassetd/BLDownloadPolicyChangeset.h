/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <bookassetd/bookassetd-Structs.h>
#import <bookassetd/NSCopying.h>

@class NSDictionary, NSSet;

@interface BLDownloadPolicyChangeset : NSObject <NSCopying> {

	int _changesetType;
	NSDictionary* _downloadProperties;
	long long _networkType;
	NSSet* _policyIDs;

}

@property (nonatomic,copy) NSSet * policyIdentifiers;                                         //@synthesize policyIDs=_policyIDs - In the implementation block
@property (assign,nonatomic) int changesetType;                                               //@synthesize changesetType=_changesetType - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadPropertiesForStoppedDownloads;              //@synthesize downloadProperties=_downloadProperties - In the implementation block
@property (assign,nonatomic) long long networkType;                                           //@synthesize networkType=_networkType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)networkType;
-(void)setNetworkType:(long long)arg1 ;
-(id)initWithPolicyIdentifiers:(id)arg1 ;
-(int)changesetType;
-(void)setChangesetType:(int)arg1 ;
-(NSDictionary *)downloadPropertiesForStoppedDownloads;
-(void)setDownloadPropertiesForStoppedDownloads:(NSDictionary *)arg1 ;
-(NSSet *)policyIdentifiers;
-(void)setPolicyIdentifiers:(NSSet *)arg1 ;
@end

