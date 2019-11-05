/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTResultsChangeGeneratorDelegate;
#import <Podcasts/Podcasts-Structs.h>
@interface MTResultsChangeGenerator : NSObject {

	id<MTResultsChangeGeneratorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTResultsChangeGeneratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTResultsChangeGeneratorDelegate>)delegate;
-(void)setDelegate:(id<MTResultsChangeGeneratorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)generateChangesForExistingObjects:(id)arg1 newObjects:(id)arg2 inSection:(unsigned long long)arg3 ;
-(NSMutableDictionary*)objectsToIndexPathDictionary:(id)arg1 inSection:(unsigned long long)arg2 ;
-(id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(NSMutableDictionary*)arg3 autoremove:(BOOL)arg4 ;
-(void)removeIndexPath:(id)arg1 forObject:(id)arg2 fromMap:(NSMutableDictionary*)arg3 ;
-(id)unbox:(id)arg1 ;
-(id)bestIndexPathForObject:(id)arg1 atIndex:(unsigned long long)arg2 fromMap:(NSMutableDictionary*)arg3 ;
-(id)box:(id)arg1 ;
-(id)closestIndexPathToRow:(unsigned long long)arg1 forIndexPaths:(NSMutableSet*)arg2 ;
@end

