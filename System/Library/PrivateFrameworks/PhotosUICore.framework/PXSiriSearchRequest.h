/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/NSSecureCoding.h>

@class NSArray;

@interface PXSiriSearchRequest : NSObject <NSSecureCoding> {

	NSArray* _queryTokens;

}

@property (nonatomic,retain) NSArray * queryTokens;              //@synthesize queryTokens=_queryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)queryTokens;
-(void)setQueryTokens:(NSArray *)arg1 ;
-(id)initWithSearchForPhotosIntent:(id)arg1 ;
-(id)initWithStartPhotoPlaybackIntent:(id)arg1 ;
-(id)_queryTokensForPhotoAttributeOptions:(unsigned long long)arg1 ;
-(id)_queryTokensForAlbumName:(id)arg1 ;
-(id)_queryTokensForSearchTerms:(id)arg1 searchTermsOperator:(long long)arg2 ;
-(id)_queryTokensForLocationCreated:(id)arg1 ;
-(id)_queryTokensForPeopleInPhoto:(id)arg1 peopleInPhotoOperator:(long long)arg2 ;
-(id)_queryTokensForDateCreated:(id)arg1 ;
-(id)_queryTokensForEvents:(id)arg1 ;
-(id)_queryTokensForPlaces:(id)arg1 ;
-(id)_queryTokensForActivities:(id)arg1 ;
-(id)_queryTokensForGeographicalFeatures:(id)arg1 ;
-(BOOL)_useNLDateSearch;
@end

