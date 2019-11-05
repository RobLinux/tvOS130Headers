/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

@interface VUIDebugMetricsArrayViewController : UITableViewController {

	NSArray* _array;
	NSDictionary* _cachedKeysOrder;

}

@property (nonatomic,retain) NSDictionary * cachedKeysOrder;              //@synthesize cachedKeysOrder=_cachedKeysOrder - In the implementation block
@property (nonatomic,retain) NSArray * array;                             //@synthesize array=_array - In the implementation block
-(id)init;
-(id)object;
-(NSArray *)array;
-(void)setObject:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)generateCachedKeys;
-(void)setCachedKeysOrder:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedKeysOrder;
@end

