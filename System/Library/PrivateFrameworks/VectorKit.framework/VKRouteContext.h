/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKRouteInfo, NSString, NSHashTable, NSArray;

@interface VKRouteContext : NSObject {

	VKRouteInfo* _routeInfo;
	unsigned char _useType;
	long long _inspectedLegIndex;
	long long _inspectedStepIndex;
	PolylineCoordinate _routeOffset;
	long long _currentLegIndex;
	long long _currentStepIndex;
	BOOL _snappingToTransitLines;
	CGSize _puckLocation;
	float _puckRadius;
	unsigned long long _puckSnappedStopID;
	NSString* _locale;
	NSString* _accessPointEntryName;
	NSString* _accessPointExitName;
	BOOL _hasContextChangedForLabels;
	NSHashTable* _labelObservers;
	BOOL _hasContextChangedForRouteLine;
	NSHashTable* _routeLineObservers;
	BOOL _hasContextChangedForAlternateRouteLines;
	NSHashTable* _alternateRouteLineObservers;
	NSArray* _alternateRoutes;
	multimap<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection> > > > >* _shareSections;

}

@property (nonatomic,readonly) VKRouteInfo * routeInfo;                         //@synthesize routeInfo=_routeInfo - In the implementation block
@property (nonatomic,readonly) unsigned char useType;                           //@synthesize useType=_useType - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                    //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) long long currentLegIndex;                         //@synthesize currentLegIndex=_currentLegIndex - In the implementation block
@property (assign,nonatomic) long long currentStepIndex;                        //@synthesize currentStepIndex=_currentStepIndex - In the implementation block
@property (assign,nonatomic) BOOL snappingToTransitLines;                       //@synthesize snappingToTransitLines=_snappingToTransitLines - In the implementation block
@property (assign,nonatomic) long long inspectedLegIndex;                       //@synthesize inspectedLegIndex=_inspectedLegIndex - In the implementation block
@property (assign,nonatomic) long long inspectedStepIndex;                      //@synthesize inspectedStepIndex=_inspectedStepIndex - In the implementation block
@property (assign,nonatomic) CGSize puckLocation;                               //@synthesize puckLocation=_puckLocation - In the implementation block
@property (assign,nonatomic) float puckRadius;                                  //@synthesize puckRadius=_puckRadius - In the implementation block
@property (assign,nonatomic) unsigned long long puckSnappedStopID;              //@synthesize puckSnappedStopID=_puckSnappedStopID - In the implementation block
@property (nonatomic,retain) NSString * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * accessPointEntryName;                   //@synthesize accessPointEntryName=_accessPointEntryName - In the implementation block
@property (nonatomic,retain) NSString * accessPointExitName;                    //@synthesize accessPointExitName=_accessPointExitName - In the implementation block
@property (nonatomic,retain) NSArray * alternateRoutes;                         //@synthesize alternateRoutes=_alternateRoutes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalRouteCount; 
-(void)dealloc;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(VKRouteInfo *)routeInfo;
-(void)setAlternateRoutes:(NSArray *)arg1 ;
-(NSArray *)alternateRoutes;
-(PolylineCoordinate)routeOffset;
-(void)resetNotificationsForObserverType:(unsigned char)arg1 ;
-(unsigned long long)totalRouteCount;
-(void)forEachSectionWithShareCount:(unsigned)arg1 dothis:(/*^block*/id)arg2 ;
-(BOOL)snappingToTransitLines;
-(long long)currentLegIndex;
-(NSString *)accessPointEntryName;
-(NSString *)accessPointExitName;
-(long long)inspectedLegIndex;
-(long long)inspectedStepIndex;
-(unsigned long long)puckSnappedStopID;
-(void)removeObserver:(id)arg1 withType:(unsigned char)arg2 ;
-(void)addObserver:(id)arg1 withType:(unsigned char)arg2 ;
-(void)setCurrentStepIndex:(long long)arg1 ;
-(long long)currentStepIndex;
-(unsigned char)useType;
-(id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2 ;
-(id)_hashTableForObserverType:(unsigned char)arg1 ;
-(void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(BOOL)arg2 ;
-(id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2 ;
-(void)setInspectedLegIndex:(long long)arg1 ;
-(void)setInspectedStepIndex:(long long)arg1 ;
-(void)setPuckRadius:(float)arg1 ;
-(void)setPuckSnappedStopID:(unsigned long long)arg1 ;
-(void)addShareSections:(const SCD_Struct_VK216*)arg1 shareCount:(unsigned)arg2 ;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(void)setCurrentLegIndex:(long long)arg1 ;
-(void)setSnappingToTransitLines:(BOOL)arg1 ;
-(CGSize)puckLocation;
-(void)setPuckLocation:(CGSize)arg1 ;
-(float)puckRadius;
-(void)setAccessPointEntryName:(NSString *)arg1 ;
-(void)setAccessPointExitName:(NSString *)arg1 ;
@end

