/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class NSMutableDictionary, MPSectionedCollection, NSDictionary;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest {

	NSMutableDictionary* _itemIndexPathToOverridePropertySet;
	MPSectionedCollection* _unpersonalizedContentDescriptors;
	MPSectionedCollection* _representedObjects;

}

@property (nonatomic,copy,readonly) NSDictionary * itemIndexPathToOverridePropertySet; 
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors;              //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * representedObjects;                              //@synthesize representedObjects=_representedObjects - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)requiresNetwork;
+(id)preferredQueue;
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
+(id)libraryViewWithUserIdentity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg1 ;
-(id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2 ;
-(id)propertiesForItemAtIndexPath:(id)arg1 ;
-(void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(MPSectionedCollection *)representedObjects;
-(void)setRepresentedObjects:(MPSectionedCollection *)arg1 ;
@end
