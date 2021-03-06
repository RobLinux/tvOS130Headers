/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseResult.h>
#import <WorkflowKit/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSString;

@interface WFCoreDataDatabaseResult : WFDatabaseResult <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _resultsController;

}

@property (nonatomic,readonly) NSFetchedResultsController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(NSFetchedResultsController *)resultsController;
-(id)initWithBackingStore:(id)arg1 fetchRequest:(id)arg2 managedObjectContext:(id)arg3 ;
@end

