/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/NSSecureCoding.h>
#import <PhotosGraph/NSCoding.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding> {

	NSString* _assetUUID;
	NSString* _momentUUID;

}

@property (nonatomic,readonly) NSString * assetUUID;               //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) NSString * momentUUID;              //@synthesize momentUUID=_momentUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetUUID;
-(id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2 ;
-(NSString *)momentUUID;
@end

