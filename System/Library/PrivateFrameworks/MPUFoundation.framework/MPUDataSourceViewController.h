/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIViewControllerRestoration.h>

@class MPUDataSource, MPUQueryDataSource, NSString;

@interface MPUDataSourceViewController : UIViewController <UIStateRestoring, UIViewControllerRestoration> {

	BOOL _hasEverReloadedData;
	BOOL _visible;
	BOOL _shouldReloadWhenVisible;
	MPUDataSource* _dataSource;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadWhenVisible;                          //@synthesize shouldReloadWhenVisible=_shouldReloadWhenVisible - In the implementation block
@property (nonatomic,retain) MPUDataSource * dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) MPUQueryDataSource * queryDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)dealloc;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(MPUDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)setDataSource:(MPUDataSource *)arg1 ;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)_setDataSource:(id)arg1 shouldReloadData:(BOOL)arg2 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)shouldReloadWhenVisible;
-(void)setShouldReloadWhenVisible:(BOOL)arg1 ;
-(void)dataSourceWillInvalidate;
-(void)dataSourceDidInvalidate;
-(void)_MPUStandardViewController_dataSourceWillInvalidateNotification:(id)arg1 ;
-(void)_MPUStandardViewController_dataSourceDidInvalidateNotification:(id)arg1 ;
-(MPUQueryDataSource *)queryDataSource;
@end

