/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKInternalRepresentation.h>

@class NSString, NSNumber, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSNumber* _adamID;
	long long _platform;
	NSSet* _versions;
	NSSet* _shortVersions;

}

@property (nonatomic,retain) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                  //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) long long platform;                 //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSSet * versions;                   //@synthesize versions=_versions - In the implementation block
@property (nonatomic,retain) NSSet * shortVersions;              //@synthesize shortVersions=_shortVersions - In the implementation block
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPlatform:(long long)arg1 ;
-(long long)platform;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSSet *)versions;
-(NSSet *)shortVersions;
-(void)setVersions:(NSSet *)arg1 ;
-(void)setShortVersions:(NSSet *)arg1 ;
@end

