/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapItemAttribution, NSString, NSArray;

@interface _MKMapItemAttribution : NSObject {

	GEOMapItemAttribution* _geoAttribution;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
-(NSString *)providerName;
-(NSArray *)attributionApps;
-(NSString *)providerID;
-(NSArray *)attributionURLs;
-(BOOL)shouldOpenInAppStore;
-(BOOL)requiresAttributionInCallout;
-(id)providerLogoImageForScale:(double)arg1 ;
-(id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3 ;
-(id)providerSnippetLogoImageForScale:(double)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
@end

