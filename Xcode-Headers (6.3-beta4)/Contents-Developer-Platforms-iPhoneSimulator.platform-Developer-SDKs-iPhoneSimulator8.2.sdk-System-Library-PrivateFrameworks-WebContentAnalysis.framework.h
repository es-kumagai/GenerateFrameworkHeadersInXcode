//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
// UUID: 293C8A83-9147-3B3D-90A3-54F93264CD3B
//
//                           Arch: x86_64
//                Current version: 12.1.0
//          Compatibility version: 1.0.0
//                 Source version: 12.53.0.0.0
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@protocol WFPINEntryViewControllerProtocol
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
@end

@protocol WFServicePINEntryControllerProtocol
- (void)cancel;
- (void)setPageTitle:(NSString *)arg1;
- (void)setURL:(NSURL *)arg1;
@end

@protocol WFWebPageProtocol
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (NSArray *)links;
- (NSString *)pageContent;
- (NSArray *)images;
- (NSArray *)scriptBlocks;
- (NSArray *)metaTagsUnlabeled;
- (NSDictionary *)metaTagsLabeled;
- (NSString *)metaTagKeywords;
- (NSString *)metaTagDescription;
- (NSString *)pageTitle;
- (NSString *)URLString;
@end

__attribute__((visibility("hidden")))
@interface WFContentSniffer : NSObject
{
}

+ (_Bool)MIMETypeIsHTMLOrText:(id)arg1;
+ (id)MIMETypeForData:(id)arg1;
+ (id)MIMETypeForString:(id)arg1;
+ (_Bool)isOctetStream:(id)arg1;
+ (_Bool)isWord:(id)arg1;
+ (_Bool)isSWF:(id)arg1;
+ (_Bool)isPNG:(id)arg1;
+ (_Bool)isPDF:(id)arg1;
+ (_Bool)isJPEG:(id)arg1;
+ (_Bool)isGIF:(id)arg1;
+ (_Bool)isXML:(id)arg1;
+ (_Bool)isXHTML:(id)arg1;
+ (_Bool)isHTML:(id)arg1;
+ (id)MIMETypeForData:(id)arg1 andString:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface WFDocumentStructureTag : WFTagFlyweight
{
}

+ (id)tagForNumberOfPixels:(long long)arg1;
+ (id)tagForNumberOfImages:(long long)arg1;
- (id)tagWithWebpage:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFImg : XMLNode
{
}

+ (id)imgWithNode:(struct _xmlNode *)arg1;
- (id)description;
- (long long)area;
- (long long)height;
- (long long)width;
- (id)src;
- (id)title;
- (id)alt;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface WFImgArrayCache : NSObject
{
    NSMutableString *imageAlternativeDescriptions;
    long long numberOfUnknownSizedImages;
    long long numberOfKnownImagePixels;
}

+ (id)imgArrayCacheWithArray:(id)arg1;
- (void)dealloc;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)imageAlternativeDescriptions;
- (id)initWithArray:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFJavascriptStripper : NSObject
{
}

+ (id)stripJavascript:(id)arg1;
+ (id)getJavascriptLines:(id)arg1;
+ (id)javascriptStripLine:(id)arg1;
+ (id)getStringsFromLine:(id)arg1 withTokenCharacter:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface WFLink : XMLNode
{
}

+ (id)linkWithNode:(struct _xmlNode *)arg1;
- (id)url;
- (id)title;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface WFLSMMap : NSObject
{
    struct __LSMMap *map;
    NSNumber *threshold;
}

+ (id)mapFromFilePath:(id)arg1;
+ (id)mapFromURL:(id)arg1;
+ (id)mapWithMap:(struct __LSMMap *)arg1;
@property(copy) NSNumber *threshold; // @synthesize threshold;
- (void)dealloc;
- (id)wordDump:(id)arg1;
- (id)evaluate:(id)arg1;
- (long long)numberOfCategories;
- (struct __LSMText *)_createLSMTextFromString:(id)arg1;
- (void)_setMap:(struct __LSMMap *)arg1;
- (struct __LSMMap *)_map;
- (id)initWithMapFromFilePath:(id)arg1;
- (id)initWithMapFromURL:(id)arg1;
- (id)initWithMap:(struct __LSMMap *)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFCategoryJudgement : NSObject
{
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;
- (id)description;
- (long long)compareByScore:(id)arg1;
- (long long)compareByCategory:(id)arg1;
- (void)setCategory:(long long)arg1;
- (long long)category;
- (void)setScore:(float)arg1;
- (float)score;

@end

__attribute__((visibility("hidden")))
@interface WFLSMResult : NSObject
{
    NSMutableArray *categoryJudgements;
    NSNumber *threshold;
}

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;
+ (id)extractScoresFromLSMResults:(struct __LSMResult *)arg1;
@property(copy) NSNumber *threshold; // @synthesize threshold;
- (void)dealloc;
- (id)description;
- (_Bool)isRestricted;
- (id)debugDescription;
- (void)setScore:(float)arg1 forCategory:(long long)arg2;
- (float)scoreForCategory:(long long)arg1;
- (long long)bestMatchingCategory;
- (long long)numberOfCategories;
- (id)initWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface WFLSMScoreNormalizedMap : WFLSMMap
{
    float *maxScore;
    float *minScore;
}

- (void)dealloc;
- (id)evaluate:(id)arg1;
- (id)initWithMap:(struct __LSMMap *)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject
{
}

+ (id)adultWebSiteTagging:(id)arg1;
+ (id)normalizeStrippedHTML:(id)arg1;
+ (id)lightweightStripHTMLTags:(id)arg1;
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;
+ (id)postprocessPlainTextWebPage:(id)arg1;
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;

@end

__attribute__((visibility("hidden")))
@interface WFSlangTag : WFTagFlyweight
{
}

+ (id)sixtyNineTag;
- (id)tagWithWebpage:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFTagFactory : NSObject
{
    NSMutableDictionary *sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)arg1;
- (void)dealloc;
- (id)tagWithClass:(Class)arg1 webpage:(id)arg2;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface WFTagFlyweight : NSObject
{
}

- (id)tagWithWebpage:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFTreeHTMLStripper : WFTreeXMLDocumentStripper
{
}

+ (id)treeStripperWithString:(id)arg1;
+ (id)treeStripperWithData:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFNodeWrapper : NSObject
{
    struct _xmlNode *_node;
}

- (void)dealloc;
- (struct _xmlNode *)node;
- (id)initWithNode:(struct _xmlNode *)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol>
{
    struct _xmlDoc *xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    _Bool hasFrameset;
    _Bool hasShortRefresh;
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg1;
- (void)dealloc;
- (id)description;
- (id)processXMLDocument:(struct _xmlDoc *)arg1 blockComments:(_Bool)arg2;
- (void)processXMLDocument:(struct _xmlDoc *)arg1;
- (void)strip;
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (id)links;
- (id)pageContent;
- (id)images;
- (id)scriptBlocks;
- (id)metaTagsUnlabeled;
- (id)metaTagsLabeled;
- (id)metaTagRating;
- (id)metaTagKeywords;
- (id)metaTagDescription;
- (id)pageTitle;
- (id)URLString;
- (void)setPageTitle:(id)arg1;
- (void)setXMLDocument:(struct _xmlDoc *)arg1;
- (id)initWithXMLDocument:(struct _xmlDoc *)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFUSC2257Tag : WFTagFlyweight
{
}

+ (id)eighteenTag;
+ (id)unitedStatesCodeTag;
+ (id)twoTwoFiveSevenTag;
- (id)tagWithWebpage:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFVerdict : NSObject
{
    _Bool restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(_Bool)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5;
- (void)dealloc;
- (id)description;
- (void)setEvidence:(int)arg1;
- (int)evidence;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setLSMEvaluationResult:(id)arg1;
- (id)LSMEvaluationResult;
- (void)setRestricted:(_Bool)arg1;
- (_Bool)restricted;

@end

__attribute__((visibility("hidden")))
@interface WFWebPageDecorator : NSObject <WFWebPageProtocol>
{
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
    NSString *URLString;
}

+ (id)webPageWithString:(id)arg1 URLString:(id)arg2;
+ (id)webPageWithString:(id)arg1;
+ (id)webPageWithData:(id)arg1 URLString:(id)arg2;
+ (id)webPageWithData:(id)arg1;
+ (id)plainTextWithWebPageString:(id)arg1;
+ (id)plainTextWithWebPageData:(id)arg1;
+ (id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2;
@property(retain) NSString *URLString; // @synthesize URLString;
- (void)dealloc;
- (id)plainText;
- (id)rawPlainText;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3;
- (id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2;
- (id)tags;
- (long long)wordCount;
- (id)linkTitlesText;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)imageAltsText;
- (long long)numberOfImages;
- (void)_cacheImgProperties;
- (_Bool)hasShortRefresh;
- (_Bool)hasFrameset;
- (id)links;
- (id)pageContent;
- (id)images;
- (id)scriptBlocks;
- (id)metaTagsUnlabeled;
- (id)metaTagsLabeled;
- (id)metaTagKeywords;
- (id)metaTagDescription;
- (id)pageTitle;
- (id)initWithWebPageStripper:(id)arg1;
- (id)initWithWebPageString:(id)arg1;
- (id)initWithWebPageData:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFWebPageToFilterText : WFWebPageDecorator
{
}

- (id)URLFuzzyForFilter;
- (id)URLFuzzyWithWordLength:(int)arg1;
- (_Bool)selfRestricted;
- (_Bool)isWorthAnalyzingWithEvidence:(int *)arg1 message:(id *)arg2;
- (id)rawPlainText;

@end

__attribute__((visibility("hidden")))
@interface WFWebPageToTrainingText : WFWebPageDecorator
{
    NSString *categorySignature;
}

+ (id)signatureForCategory:(unsigned long long)arg1;
+ (id)documentSignature;
- (void)dealloc;
- (id)rawPlainText;
- (void)setCategorySignature:(id)arg1;
- (id)categorySignature;

@end

__attribute__((visibility("hidden")))
@interface WFWhitelistSite : NSObject
{
    NSString *urlString;
    NSURL *url;
    NSString *domainName;
    NSString *normalizedURLString;
}

@property(readonly) NSString *domainName; // @synthesize domainName;
@property(copy) NSURL *url; // @synthesize url;
@property(copy) NSString *urlString; // @synthesize urlString;
- (id)description;
- (_Bool)hasMetasitePrefix:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithURLString:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableSet *siteSet;
    NSMutableArray *siteBuffer;
    unsigned long long maxSize;
}

@property(retain) NSMutableArray *siteBuffer; // @synthesize siteBuffer;
@property(retain) NSMutableSet *siteSet; // @synthesize siteSet;
@property unsigned long long maxSize;
- (id)description;
- (unsigned long long)count;
- (_Bool)containsMetasitePrefixOfURLString:(id)arg1;
- (_Bool)containsURLString:(id)arg1;
- (void)addURLString:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)trimToSize:(unsigned long long)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFWhitelistUserPreferences : NSObject
{
    WFWhitelistSiteBuffer *filterWhitelist;
    WFWhitelistSiteBuffer *filterBlacklist;
    WFWhitelistSiteBuffer *webWhitelist;
    _Bool filterEnabled;
    _Bool whitelistEnabled;
    _Bool alwaysAllowHTTPS;
    NSString *username;
}

+ (id)defaultWhitelistForUser:(id)arg1;
+ (id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2;
+ (id)_modificationDateForFileAtPath:(id)arg1;
+ (id)whitelistForUser:(id)arg1;
+ (id)whitelistWithPreferences:(id)arg1;
+ (_Bool)_isURLMetasite:(id)arg1;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_metasiteDomainNamesArray;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
+ (id)preferencesPathForUsername:(id)arg1;
@property(readonly) WFWhitelistSiteBuffer *webWhitelist; // @synthesize webWhitelist;
@property(readonly) WFWhitelistSiteBuffer *filterBlacklist; // @synthesize filterBlacklist;
@property(readonly) WFWhitelistSiteBuffer *filterWhitelist; // @synthesize filterWhitelist;
@property(retain) NSString *username; // @synthesize username;
@property _Bool alwaysAllowHTTPS; // @synthesize alwaysAllowHTTPS;
@property _Bool whitelistEnabled; // @synthesize whitelistEnabled;
@property _Bool filterEnabled; // @synthesize filterEnabled;
- (id)description;
- (_Bool)isURL:(id)arg1 onList:(id)arg2;
- (id)pronounceOnPageURLString:(id)arg1 shouldFilter:(_Bool *)arg2;
- (_Bool)isURLAllowed:(id)arg1 reason:(id *)arg2 shouldFilter:(_Bool *)arg3 foundOnList:(_Bool *)arg4;
- (_Bool)isURLAllowed:(id)arg1;
- (void)dealloc;
- (id)initWithPreferences:(id)arg1;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface WFJudge : NSObject
{
    WFLSMMap *map;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id *)arg4 pageTitle:(id *)arg5;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id *)arg3 pageTitle:(id *)arg4;
- (id)_pronounceOnWebpage:(id)arg1;
- (id)pronounceOnWebpage:(id)arg1;
- (id)initWithMap:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFBlockPage : NSObject
{
    NSURL *pageTemplateURL;
    NSString *userVisibleURLString;
    NSString *formActionURLString;
    NSString *preferredLanguage;
}

@property(retain) NSString *formActionURLString; // @synthesize formActionURLString;
@property(retain) NSString *userVisibleURLString; // @synthesize userVisibleURLString;
@property(readonly) NSURL *pageTemplateURL; // @synthesize pageTemplateURL;
- (id)page;
- (id)_css;
- (id)_fileContentWithName:(id)arg1 extension:(id)arg2;
- (id)_blockpage;
- (void)dealloc;
- (id)_initWithUsername:(id)arg1 fileName:(id)arg2;
- (id)initWithUsername:(id)arg1 overridesAllowded:(_Bool)arg2;
- (id)initNoOveridePageWithUsername:(id)arg1;

@end

@interface WebFilterEvaluator : NSObject <NSSecureCoding>
{
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
}

+ (_Bool)supportsSecureCoding;
+ (id)createWithResponse:(id)arg1;
+ (_Bool)isManagedSession;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)unblockWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptUnblockWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)wasBlocked;
- (int)filterState;
- (id)dataComplete;
- (id)addData:(id)arg1;
- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2;
- (id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3;

@end

@interface WFUserSettings : NSObject
{
    NSDictionary *_userSettings;
    NSString *_userName;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

+ (_Bool)_isURLMetasite:(id)arg1;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)_metasiteDomainNamesArray;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (_Bool)autoWhitelistContainsURL:(id)arg1;
- (_Bool)whiteListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (_Bool)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)whiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (id)_userSettingsForUser:(id)arg1;
- (void)setWhiteListEnabled:(_Bool)arg1;
- (_Bool)whiteListEnabled;
- (void)setContentFilterOverridesEnabled:(_Bool)arg1;
- (_Bool)contentFilterOverridesEnabled;
- (void)setContentFilterEnabled:(_Bool)arg1;
- (_Bool)contentFilterEnabled;
- (void)setRestrictWebEnabled:(_Bool)arg1;
- (_Bool)restrictWebEnabled;
- (_Bool)contentFilterListsAllowURL:(id)arg1;
- (_Bool)canEditAlwaysAllowHTTPS;
- (void)setAlwaysAllowHTTPS:(_Bool)arg1;
- (_Bool)alwaysAllowHTTPS;
@property(readonly, nonatomic) _Bool canEditOverridesAllowed;
@property(nonatomic) _Bool overridesAllowed;
@property(readonly, nonatomic) _Bool canEditWhiteListAllowedSites;
@property(retain, nonatomic) NSArray *whiteListAllowedSites;
@property(readonly, nonatomic) _Bool canEditContentFilterOverriddenBlackListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property(readonly, nonatomic) _Bool canEditContentFilterOverriddenWhiteListedSites;
@property(retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
- (id)contentFilterOverriddenSites;
@property(readonly, nonatomic) _Bool canEditRestrictionType;
@property(nonatomic) long long restrictionType;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;
- (_Bool)_addManagedDefaults:(id)arg1;
- (_Bool)_setManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;

@end

__attribute__((visibility("hidden")))
@interface XMLNode : NSObject
{
    struct _xmlNode *_xmlNode;
}

+ (id)getJavascriptFromNode:(struct _xmlNode *)arg1;
+ (id)stringValueForAttribute:(id)arg1 inNode:(struct _xmlNode *)arg2;
- (void)dealloc;
- (long long)_intValueFromAttribute:(id)arg1;
- (id)_stringValueFromAttribute:(id)arg1;
- (struct _xmlNode *)xmlNode;
- (void)setXmlNode:(struct _xmlNode *)arg1;
- (id)initWithNode:(struct _xmlNode *)arg1;

@end

__attribute__((visibility("hidden")))
@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol>
{
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate; // @synthesize delegate=_delegate;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (void)setPageTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol>
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (id)delegate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)hasUIWebViewSubView:(id)arg1;
- (void)presentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

@interface NSNumber (WFApproximation)
- (_Bool)WF_isEqualToNumber:(id)arg1 withPrecision:(float)arg2;
@end

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;
+ (id)WF_ignorableCharacterSet;
- (id)WF_stringWithMostSignificatDomainPart;
- (_Bool)_isIPv4DomainAddress;
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;
- (long long)WF_numericCompare:(id)arg1;
- (id)WF_fuzzyStringWithWordLength:(int)arg1;
- (id)WF_stringByConvertingSpacesInHTMLSpaces;
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;
- (id)WF_stringByEscapingPrintfArguments;
- (id)WF_stringByRemovingWord:(id)arg1;
- (struct _NSRange)WF_rangeOfWord:(id)arg1;
- (_Bool)WF_containsWord:(id)arg1;
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)WF_containsString:(id)arg1;
@end

@interface NSURL (WFAdditions)
- (id)WF_normalizedRelativePath;
- (_Bool)WF_hostnameIsIPAddress;
- (id)WF_hostnameFromSecondLevelDomain;
@end

@interface NSMutableArray (WFStack)
- (struct _xmlNode *)WF_pop;
- (void)WF_push:(struct _xmlNode *)arg1;
@end

