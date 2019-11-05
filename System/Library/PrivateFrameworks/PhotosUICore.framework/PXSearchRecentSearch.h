/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/NSSecureCoding.h>

@class NSString, NSArray;

@interface PXSearchRecentSearch : NSObject <NSSecureCoding> {

	NSString* _searchText;
	NSArray* _representedObjects;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * searchText;                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) NSArray * representedObjects;              //@synthesize representedObjects=_representedObjects - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(BOOL)_isSupportedRepresentedObjects:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)searchText;
-(NSArray *)representedObjects;
-(id)initWithRepresentedObjects:(id)arg1 searchText:(id)arg2 ;
@end

