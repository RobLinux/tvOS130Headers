/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class PKPrinter, NSString, UIButton, UIPrinterSetupConnectingView;

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {

	BOOL _addToNetwork;
	BOOL _directPrinting;
	PKPrinter* _printer;
	NSString* _directPasscode;
	UIButton* _finishButton;
	UIPrinterSetupConnectingView* _connectingView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic) BOOL addToNetwork;                                          //@synthesize addToNetwork=_addToNetwork - In the implementation block
@property (assign,nonatomic) BOOL directPrinting;                                        //@synthesize directPrinting=_directPrinting - In the implementation block
@property (nonatomic,copy) NSString * directPasscode;                                    //@synthesize directPasscode=_directPasscode - In the implementation block
@property (nonatomic,retain) UIButton * finishButton;                                    //@synthesize finishButton=_finishButton - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finish;
-(unsigned long long)supportedInterfaceOrientations;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)finished:(BOOL)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setAddToNetwork:(BOOL)arg1 ;
-(void)setDirectPrinting:(BOOL)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(void)setDirectPasscode:(NSString *)arg1 ;
-(void)toggleAddToNetwork:(id)arg1 ;
-(void)toggleDirectPrinting:(id)arg1 ;
-(BOOL)addToNetwork;
-(BOOL)directPrinting;
-(NSString *)directPasscode;
-(UIButton *)finishButton;
-(void)setFinishButton:(UIButton *)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
@end

