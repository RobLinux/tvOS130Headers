/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/CLSCurationDebugItemCluster.h>

@class NSArray, NSString;

@interface PLDataCluster : NSObject <CLSCurationDebugItemCluster> {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * clsCurationItems; 
@property (nonatomic,retain) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                       //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                          //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
+(id)clusterWithObjects:(id)arg1 ;
-(NSArray *)clsCurationItems;
-(NSString *)description;
-(id)init;
-(double)score;
-(NSArray *)objects;
-(id)locations;
-(void)setScore:(double)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(id)universalDates;
-(id)approximateRegionWithMaximumRadius:(double)arg1 ;
-(id)meanUniversalDate;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)clustroid;
-(void)setClustroid:(id)arg1 ;
@end

