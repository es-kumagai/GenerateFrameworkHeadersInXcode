//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/PlugIns/IDERTFEditor.ideplugin/Contents/MacOS/IDERTFEditor
// UUID: B892D950-78EE-38C3-AAB1-785EAE9CA63F
//
//                           Arch: x86_64
//                Current version: 6751.0.0
//          Compatibility version: 1.0.0
//                 Source version: 6751.0.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol DVTDiffTextFilter <NSObject>
+ (DVTFileDataType *)textFileDataTypeForInputFilePath:(DVTFilePath *)arg1;
+ (BOOL)pathRequiresFilter:(DVTFilePath *)arg1;

@optional
+ (DVTFilePath *)pathToKeyConflictResolutionFromInputFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
+ (DVTFilePath *)pathToTextFileFromInputFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
+ (BOOL)filterInputFilePath:(DVTFilePath *)arg1 toOutputFilePath:(DVTFilePath *)arg2 error:(id *)arg3;
@end

@protocol DVTFindBarFindable

@optional
- (struct _NSRange)selectedRangeForFindBar:(DVTFindBar *)arg1;
- (DVTDocumentLocation *)startingLocationForFindBar:(DVTFindBar *)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateCurrentResult:(DVTFindResult *)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateResults:(NSArray *)arg2;
@end

@protocol DVTTextFindable <NSObject>
- (DVTFindResult *)findStringMatchingDescriptor:(DVTFindDescriptor *)arg1 backwards:(BOOL)arg2 from:(DVTDocumentLocation *)arg3 to:(DVTDocumentLocation *)arg4;

@optional
@property unsigned long long supportedMatchingOptions;
- (long long)compareFindableLocation:(DVTDocumentLocation *)arg1 withLocation:(DVTDocumentLocation *)arg2;
@end

@protocol DVTTextReplacable <NSObject>
- (BOOL)replaceFindResults:(NSArray *)arg1 withString:(NSString *)arg2 withError:(id *)arg3;

@optional
- (BOOL)replaceFindResults:(NSArray *)arg1 inSelection:(struct _NSRange)arg2 withString:(NSString *)arg3 withError:(id *)arg4;
- (BOOL)replaceTextWithContentsOfURL:(NSURL *)arg1 error:(id *)arg2;
@end

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (NSDictionary *)layoutManager:(NSLayoutManager *)arg1 shouldUseTemporaryAttributes:(NSDictionary *)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(BOOL)arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSTextDelegate <NSObject>

@optional
- (void)textDidChange:(NSNotification *)arg1;
- (void)textDidEndEditing:(NSNotification *)arg1;
- (void)textDidBeginEditing:(NSNotification *)arg1;
- (BOOL)textShouldEndEditing:(NSText *)arg1;
- (BOOL)textShouldBeginEditing:(NSText *)arg1;
@end

@protocol NSTextStorageDelegate <NSObject>

@optional
- (void)textStorageDidProcessEditing:(NSNotification *)arg1;
- (void)textStorageWillProcessEditing:(NSNotification *)arg1;
@end

@protocol NSTextViewDelegate <NSTextDelegate>

@optional
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2;
- (NSUndoManager *)undoManagerForTextView:(NSTextView *)arg1;
- (NSSharingServicePicker *)textView:(NSTextView *)arg1 willShowSharingServicePicker:(NSSharingServicePicker *)arg2 forItems:(NSArray *)arg3;
- (NSURL *)textView:(NSTextView *)arg1 URLForContentsOfTextAttachment:(NSTextAttachment *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)textView:(NSTextView *)arg1 didCheckTextInRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(NSDictionary *)arg4 results:(NSArray *)arg5 orthography:(NSOrthography *)arg6 wordCount:(long long)arg7;
- (NSDictionary *)textView:(NSTextView *)arg1 willCheckTextInRange:(struct _NSRange)arg2 options:(NSDictionary *)arg3 types:(unsigned long long *)arg4;
- (NSMenu *)textView:(NSTextView *)arg1 menu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 atIndex:(unsigned long long)arg4;
- (long long)textView:(NSTextView *)arg1 shouldSetSpellingState:(long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 completions:(NSArray *)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (NSString *)textView:(NSTextView *)arg1 willDisplayToolTip:(NSString *)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (void)textViewDidChangeTypingAttributes:(NSNotification *)arg1;
- (void)textViewDidChangeSelection:(NSNotification *)arg1;
- (NSDictionary *)textView:(NSTextView *)arg1 shouldChangeTypingAttributes:(NSDictionary *)arg2 toAttributes:(NSDictionary *)arg3;
- (BOOL)textView:(NSTextView *)arg1 shouldChangeTextInRanges:(NSArray *)arg2 replacementStrings:(NSArray *)arg3;
- (NSArray *)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRanges:(NSArray *)arg2 toCharacterRanges:(NSArray *)arg3;
- (struct _NSRange)textView:(NSTextView *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textView:(NSTextView *)arg1 writeCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(NSPasteboard *)arg4 type:(NSString *)arg5;
- (NSArray *)textView:(NSTextView *)arg1 writablePasteboardTypesForCell:(id <NSTextAttachmentCell>)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(NSTextView *)arg1 draggedCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 event:(NSEvent *)arg4 atIndex:(unsigned long long)arg5;
- (void)textView:(NSTextView *)arg1 doubleClickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(NSTextView *)arg1 clickedOnCell:(id <NSTextAttachmentCell>)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(NSTextView *)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
@end

@interface IDERichTextDocument : IDEEditorDocument <DVTTextFindable, DVTTextReplacable, NSTextStorageDelegate>
{
    BOOL setUpPrintInfoDefaults;
    NSTextStorage *textStorage;
    double scaleFactor;
    BOOL isReadOnly;
    NSColor *backgroundColor;
    double hyphenationFactor;
    struct CGSize viewSize;
    BOOL hasMultiplePages;
    NSString *author;
    NSString *copyright;
    NSString *company;
    NSString *title;
    NSString *subject;
    NSString *comment;
    NSArray *keywords;
    BOOL openedIgnoringRichText;
    unsigned long long documentEncoding;
    BOOL convertedDocument;
    BOOL lossyDocument;
    BOOL transient;
    NSArray *originalOrientationSections;
    unsigned long long documentEncodingForSaving;
    NSString *fileTypeToSet;
}

+ (id)readableTypeForType:(id)arg1;
+ (BOOL)isRichTextType:(id)arg1;
@property(copy) NSArray *keywords; // @synthesize keywords;
@property(copy) NSString *comment; // @synthesize comment;
@property(copy) NSString *subject; // @synthesize subject;
@property(copy) NSString *title; // @synthesize title;
@property(copy) NSString *company; // @synthesize company;
@property(copy) NSString *copyright; // @synthesize copyright;
@property(copy) NSString *author; // @synthesize author;
@property(copy) NSArray *originalOrientationSections; // @synthesize originalOrientationSections;
@property(getter=isTransient) BOOL transient; // @synthesize transient;
@property BOOL hasMultiplePages; // @synthesize hasMultiplePages;
@property(copy, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage;
@property double scaleFactor; // @synthesize scaleFactor;
@property struct CGSize viewSize; // @synthesize viewSize;
@property double hyphenationFactor; // @synthesize hyphenationFactor;
@property(getter=isLossy) BOOL lossy; // @synthesize lossy=lossyDocument;
@property(getter=isOpenedIgnoringRichText) BOOL openedIgnoringRichText; // @synthesize openedIgnoringRichText;
@property(getter=isConverted) BOOL converted; // @synthesize converted=convertedDocument;
@property unsigned long long encodingForSaving; // @synthesize encodingForSaving=documentEncodingForSaving;
@property unsigned long long encoding; // @synthesize encoding=documentEncoding;
@property(copy) NSColor *backgroundColor; // @synthesize backgroundColor;
@property(getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=isReadOnly;
- (void).cxx_destruct;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (void)_undoReplaceFindResults:(id)arg1;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)textStorageDidProcessEditing:(id)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)encodingPopupChanged:(id)arg1;
- (void)appendPlainTextExtensionChanged:(id)arg1;
- (void)toggleHyphenation:(id)arg1;
- (void)togglePageBreaks:(id)arg1;
- (BOOL)toggleRichWillLoseInformation;
- (void)toggleReadOnly:(id)arg1;
- (id)printInfo;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forDocumentProperty:(id)arg2;
- (void)setDocumentPropertiesToDefaults;
- (void)clearDocumentProperties;
- (BOOL)hasDocumentProperties;
- (id)knownDocumentProperties;
- (id)documentPropertyToAttributeNameMappings;
@property(getter=isRichText) BOOL richText;
- (BOOL)isTransientAndCanBeReplaced;
@property struct CGSize paperSize;
- (id)packageFileWrapperOrDataOfType:(id)arg1 error:(id *)arg2;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (unsigned long long)suggestedDocumentEncoding;
- (void)applyDefaultTextAttributes:(BOOL)arg1;
- (id)defaultTextAttributes:(BOOL)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 encoding:(unsigned long long)arg3 ignoreRTF:(BOOL)arg4 ignoreHTML:(BOOL)arg5 error:(id *)arg6;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)textDocumentTypeToTextEditDocumentTypeMappingTable;
- (BOOL)canSave;
- (id)init;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 didRecoverSelector:(SEL)arg2;
- (id)autosavingFileType;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)keepBackupFile;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

@interface IDERichTextDocumentUndoPayload : NSObject
{
    NSString *_string;
    NSString *_replacementString;
    struct _NSRange _range;
}

@property struct _NSRange range; // @synthesize range=_range;
@property(copy) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(copy) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 replacementString:(id)arg2 range:(struct _NSRange)arg3;

@end

@interface IDERichTextTextView : NSTextView
{
    NSArray *_foundLocations;
    DVTTextDocumentLocation *_currentFoundLocation;
}

@property(copy) DVTTextDocumentLocation *currentFoundLocation; // @synthesize currentFoundLocation=_currentFoundLocation;
@property(copy, nonatomic) NSArray *foundLocations; // @synthesize foundLocations=_foundLocations;
- (void).cxx_destruct;
- (void)drawFoundLocationsInRange:(struct _NSRange)arg1;

@end

@interface IDERichTextLayoutManager : NSLayoutManager
{
}

- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;

@end

@interface IDERichTextConversionProvider : NSObject <DVTDiffTextFilter>
{
}

+ (BOOL)filterInputFilePath:(id)arg1 toOutputFilePath:(id)arg2 error:(id *)arg3;
+ (id)textFileDataTypeForInputFilePath:(id)arg1;
+ (BOOL)pathRequiresFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface IDERichTextEditorViewController : IDEEditor <NSLayoutManagerDelegate, NSTextViewDelegate, NSTextDelegate, DVTFindBarFindable>
{
    IDERichTextEditorScalingScrollView *_scrollView;
    BOOL hasMultiplePages;
    BOOL rulerIsBeingDisplayed;
    BOOL isSettingSize;
    NSLayoutManager *_layoutManager;
    id _didSaveNotifToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
@property(retain) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (void)didEndToggleRichSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)toggleRich:(id)arg1;
- (void)doToggleRichWithNewURL:(id)arg1;
- (void)doForegroundLayoutToCharacterIndex:(unsigned long long)arg1;
- (void)setHasMultiplePages:(BOOL)arg1 force:(BOOL)arg2;
- (id)documentView;
- (void)removePage;
- (void)addPage;
- (unsigned long long)numberOfPages;
- (void)convertTextForRichTextStateRemoveAttachments:(BOOL)arg1;
- (void)updateForRichTextAndRulerState;
- (void)removeAttachments;
- (BOOL)isHyphenationAllowed;
- (BOOL)isRulerVisible;
- (void)showRuler:(id)arg1;
- (void)showRulerDelayed:(BOOL)arg1;
- (void)setupTextViewForDocument;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupInitialTextViewSharedState;
- (id)firstTextView;
- (void)breakUndoCoalescing;
- (id)document;
- (void)takeFocus;
- (void)loadView;
- (struct _NSRange)visibleCharacterRange;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)printDocument:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)useSelectionForReplace:(id)arg1;
- (void)useSelectionForFind:(id)arg1;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (BOOL)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
- (id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)rtf_toggleHyphenation:(id)arg1;
- (void)rtf_addLink:(id)arg1;
- (void)rtf_toggleRuler:(id)arg1;
- (void)rtf_insertParagraphBreak:(id)arg1;
- (void)rtf_insertLineBreak:(id)arg1;
- (void)rtf_insertPageBreak:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface IDERichTextEditorRulerView : NSRulerView
{
}

+ (id)backgroundColor;

@end

@interface IDERichTextEditorScalingScrollView : NSScrollView
{
    NSPopUpButton *_scalePopUpButton;
    double scaleFactor;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)setScaleFactor:(double)arg1 adjustPopup:(BOOL)arg2;
- (void)setScaleFactor:(double)arg1;
- (double)scaleFactor;
- (void)scalePopUpAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;
- (void)makeScalePopUpButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

@interface _IDERTFEditorBundlePrivateClassForFindingBundle : NSObject
{
}

@end
