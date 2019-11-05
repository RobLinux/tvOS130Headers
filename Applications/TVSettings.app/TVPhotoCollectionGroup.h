/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface TVPhotoCollectionGroup : NSObject {

	NSString* _photoCollectionGroupName;
	NSString* _photoCollectionGroupIdentifier;
	NSDictionary* _photoCollectionGroupProviderInfo;
	NSArray* _photoCollections;

}

@property (nonatomic,copy,readonly) NSString * photoCollectionGroupName; 
@property (nonatomic,copy,readonly) NSString * photoCollectionGroupIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * photoCollectionGroupProviderInfo; 
@property (nonatomic,copy,readonly) NSArray * photoCollections;                                   //@synthesize photoCollections=_photoCollections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)photoCollections;
-(NSString *)photoCollectionGroupName;
-(id)initWithPhotoCollections:(id)arg1 ;
-(NSDictionary *)photoCollectionGroupProviderInfo;
-(NSString *)photoCollectionGroupIdentifier;
@end
