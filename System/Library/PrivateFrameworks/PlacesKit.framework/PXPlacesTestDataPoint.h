/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <PlacesKit/PXPlacesGeotaggable.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {

	CLLocationCoordinate2D _coordinate;
	NSString* _name;

}

@property (readonly) CGImageRef image; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(CGImageRef)image;
-(long long)compareTo:(id)arg1 ;
-(id)initWithName:(id)arg1 location:(CLLocationCoordinate2D)arg2 ;
@end

