/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTResultsController.h>
#import <Podcasts/MTResultsChangeGeneratorDelegate.h>

@class NSArray, MTResultsChangeGenerator, NSString;

@interface MTListResultsController : MTResultsController <MTResultsChangeGeneratorDelegate> {

	NSArray* _objects;
	MTResultsChangeGenerator* _changeGenerator;

}

@property (nonatomic,retain) MTResultsChangeGenerator * changeGenerator;              //@synthesize changeGenerator=_changeGenerator - In the implementation block
@property (nonatomic,retain) NSArray * objects;                                       //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)allObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1 ;
-(unsigned long long)startingIndexForDisplay;
-(void)setChangeGenerator:(MTResultsChangeGenerator *)arg1 ;
-(MTResultsChangeGenerator *)changeGenerator;
-(void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
@end

