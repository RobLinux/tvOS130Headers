/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoSources-Structs.h>
#import <TVPhotoSources/NSCopying.h>
#import <TVPhotoSources/NSMutableCopying.h>
#import <TVPhotoSources/NSSecureCoding.h>

@class NSString, TVPhotoSource, NSDictionary;

@interface TVPhotoCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _collectionIdentifier;
	NSString* _collectionName;
	NSString* _remoteURL;
	BOOL _hasExternalURLs;
	TVPhotoSource* _photoSource;

}

@property (nonatomic,readonly) NSDictionary * providerInfo; 
@property (nonatomic,retain) TVPhotoSource * photoSource;                         //@synthesize photoSource=_photoSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteURL;                         //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionName;                    //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalURLs;                              //@synthesize hasExternalURLs=_hasExternalURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)collectionIdentifier;
-(NSString *)collectionName;
-(NSDictionary *)providerInfo;
-(NSString *)remoteURL;
-(BOOL)hasExternalURLs;
-(TVPhotoSource *)photoSource;
-(void)setPhotoSource:(TVPhotoSource *)arg1 ;
@end

