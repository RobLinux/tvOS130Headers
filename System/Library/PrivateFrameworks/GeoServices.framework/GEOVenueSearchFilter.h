/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOSearchFilter.h>

@protocol GEOVenueIdentifier;
@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter> {

	id<GEOVenueIdentifier> _identifier;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(id<GEOVenueIdentifier>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
@end

