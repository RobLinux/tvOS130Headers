/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSString, UITableViewController, NSIndexPath;

@interface CNPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	BOOL _allowsDiscoveredItems;
	BOOL _allowsCustomItems;
	id _selectedItem;
	NSArray* _discoveredItems;
	NSArray* _builtinItems;
	NSArray* _customItems;
	NSString* _itemLocalizationKey;
	/*^block*/id _itemLocalizationBlock;
	UITableViewController* _tableViewController;
	NSIndexPath* _selectedIndexPath;
	long long _discoveredItemsSection;
	long long _builtinItemsSection;
	long long _customItemsSection;

}

@property (nonatomic,retain) UITableViewController * tableViewController;                 //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                             //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign,nonatomic) long long discoveredItemsSection;                            //@synthesize discoveredItemsSection=_discoveredItemsSection - In the implementation block
@property (assign,nonatomic) long long builtinItemsSection;                               //@synthesize builtinItemsSection=_builtinItemsSection - In the implementation block
@property (assign,nonatomic) long long customItemsSection;                                //@synthesize customItemsSection=_customItemsSection - In the implementation block
@property (nonatomic,retain) id selectedItem;                                             //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
@property (nonatomic,copy) NSArray * discoveredItems;                                     //@synthesize discoveredItems=_discoveredItems - In the implementation block
@property (assign,nonatomic) BOOL allowsDiscoveredItems;                                  //@synthesize allowsDiscoveredItems=_allowsDiscoveredItems - In the implementation block
@property (nonatomic,copy) NSArray * builtinItems;                                        //@synthesize builtinItems=_builtinItems - In the implementation block
@property (nonatomic,copy) NSArray * customItems;                                         //@synthesize customItems=_customItems - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomItems;                                      //@synthesize allowsCustomItems=_allowsCustomItems - In the implementation block
@property (nonatomic,copy) NSString * itemLocalizationKey;                                //@synthesize itemLocalizationKey=_itemLocalizationKey - In the implementation block
@property (nonatomic,copy) id itemLocalizationBlock;                                      //@synthesize itemLocalizationBlock=_itemLocalizationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEditing;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)selectedItem;
-(void)setSelectedItem:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITableViewController *)tableViewController;
-(void)cancelPicker:(id)arg1 ;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)setBuiltinItems:(NSArray *)arg1 ;
-(id)titleForPickerItem:(id)arg1 ;
-(id)titleForAddCustomItem;
-(void)setAllowsCustomItems:(BOOL)arg1 ;
-(BOOL)allowsCustomItems;
-(NSArray *)builtinItems;
-(void)setCustomItems:(NSArray *)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
-(NSArray *)discoveredItems;
-(NSArray *)customItems;
-(void)_updateRightButtonItem;
-(void)donePicker:(id)arg1 ;
-(void)setDiscoveredItemsSection:(long long)arg1 ;
-(void)setBuiltinItemsSection:(long long)arg1 ;
-(void)setCustomItemsSection:(long long)arg1 ;
-(BOOL)allowsDiscoveredItems;
-(long long)discoveredItemsSection;
-(long long)builtinItemsSection;
-(id)_titleForPickerItem:(id)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(long long)customItemsSection;
-(unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1 ;
-(void)customLabelUpdated:(id)arg1 ;
-(void)setDiscoveredItems:(NSArray *)arg1 ;
-(void)setAllowsDiscoveredItems:(BOOL)arg1 ;
-(NSString *)itemLocalizationKey;
-(void)setItemLocalizationKey:(NSString *)arg1 ;
-(id)itemLocalizationBlock;
-(void)setItemLocalizationBlock:(id)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end

